
Given a BST with N nodes and a target node K. The task is to find an integer having minimum absolute difference with given target value K and return this difference.

Input Format:
The first line of the input contains an integer 'T' denoting the number of test cases. Then 'T' test cases follow. Each test case consists of three lines. First line of each test case contains an integer N denoting the number of nodes in the BST . Second line of each test case consists of 'N' space separated integers denoting the elements of the BST. These elements are inserted into BST in the given order.The last line of each test case contains an integer k as specified in problem statement.

Output Format:
The output for each test case will be the minimum absolute difference of a node with given target value K.

Your Task:
This is a function problem. You don't have to take any input. Just complete the function maxDiff() that takes node and K as parameter and returns the minimum difference.

Constraints:
1 <= T <= 100
1 <= N <= 200

Example:
Input:
2
9
9 4 3 6 5 7 17 22 20
18
9
9 4 3 6 5 7 17 22 20
4   

Output:
1
0

Explanation:

Testcase1:
K=18. The node that has value nearest to K is 17 so it's difference with k is the answer.
Testcase2:
K=4. The node that has value nearest to K is 4 so it's difference with k is the answer.


Sol:

/*The Node structure is
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/
/*You are required to complete below method */

void helper(Node* root,int x,int &ans)
{
    if(!root)
    {
        return;
    }
    if(abs(root->data-x) < ans)
    {
        ans=abs(root->data-x);
    }
    if(x < root->data)
    {
        helper(root->left,x,ans);
    }
    if(x > root->data)
    {
        helper(root->right,x,ans);
    }
    
    return;
}

int maxDiff(Node *root, int x)
{
    int ans=INT_MAX;
    helper(root,x,ans);
    return ans;
    
}

