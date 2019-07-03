
Given two Binary Search Trees(without duplicates), you need to print the common nodes in them. In other words, find intersection of two BSTs.

BST1:

                 5
              /      \
            1         10
          /   \        /
         0     4    7
                    \
                     9

BST2:

               10
             /    \
            7     20
          /   \
         4     9

The common elements of above two BSTs are 4 7 9 10

Input Format:
The first line of the input contains an integer T, denoting the number of testcases. Then T test cases follow. Each testcase contains two lines of input. The first line contains number of nodes N. The second line contains values of nodes.

Output Format:
For each test case, in a new line, print the nodes common to both BSTs in sorted order.

Your Task:
This is a function problem. You only need to complete the function printCommon() that takes nodes of both BSTs as parameter.

Constraints:
1 <= T <= 50
1 <= N <= 50

Example:
Input:
2
7
5 1 10 0 4 7 9
5
10 7 20 4 9
5
10 2 11 1 3
3
2 1 3

Output:
4 7 9 10
1 2 3

Explanation:
Testcase1: 4 7 9 10 are the only common nodes.


Sol:

/*This is a function problem.You only need to complete the function given below*/
/*Node structure
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

void inorder(Node* root,vector<int>&v)
{
    if(!root)
    {
        return;
    }
    v[root->data]++;
    inorder(root->left,v);
    inorder(root->right,v);
}


void printCommon(Node *root1, Node *root2)
{
     vector<int>v(10000,0);
     inorder(root1,v);
     inorder(root2,v);
     for(int i=1;i<v.size();i++)
     {
         if(v[i]==2)
         {
             cout<<i<<" ";
         }
     }
     cout<<endl;
}

