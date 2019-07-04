
Given two BST, you need to print the elements of both BSTs in sorted form.

Input Format:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains three lines. The first line of each test case contain's an integer N and M denoting the size of the two BST's. Then In the next two line are space separated values of the two BST's.

Output Format:
For each testcase, in a new line, print the elements of both BSTs in sorted form.

Your Task:
This is a function problem, you don't have to take any input. Just complete the function merge() that nodes of both BSTs as parameters.

Constraints:
1 <= T <= 100
1 <= N,M <= 100

Example:
Input:
2
3 3
1 33 4 
6 7 1
2 2
1 6
9 2

Output:
1 1 4 6 7 33
1 2 6 9

Explanation:
Testcase1: The BSTs look like

BST1:
                1
                  \
                    4
                       \
                         33

BST2:
                     6
                    /   \
                   1    7
The sorted elements of above BSTs are 1 1 4 6 7 33


Sol:

/* The structure of Node is
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};*/
/*You are required to complete below method */

void helper(Node* root,priority_queue<int,vector<int>,greater<int>>&pq)
{
    if(!root)
    {
        return;
    }
    helper(root->left,pq);
    pq.push(root->data);
    helper(root->right,pq);
    
    return;
}


void merge(Node *root1, Node *root2)
{
   priority_queue<int,vector<int>,greater<int>>pq;
   helper(root1,pq);
   helper(root2,pq);
   
   while(!pq.empty())
   {
       cout<<pq.top()<<" ";
       pq.pop();
   }
}

