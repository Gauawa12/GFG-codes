
Given an array arr[] of N positive integers to be inserted into BST and a number X. The task it to find Ceil of X.
Ceil(X) is a number that is either equal to X or is immediately greater than X.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains number of elements in the BST, i.e N. Next line contains N elements to be inserted into BST and last line contains X.

Output:
For each testcase, print the smallest element in BST which is larger than X.

Your task:
No need to worry about insert function in BST. Just complete the function findCeil() to implement ceil in BST.

Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= arr[i] <= 105

Example:
Input:
2
5
5 7 1 2 3
3
6
10 5 11 4 7 8
6

Output:
5
7

Explanation:
Testcase 1: We find 3 in BST, so ceil of 3 is 3.


Sol:

O(logn)

/*
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
// Function to find ceil of a given input in BST. If input is more 
// than the max key in BST, return -1 

void helper(Node* root,int x,int &ans,int &minabs)
{
    if(!root)
    {
        return;
    }
    if((root->data-x)>=0 && (root->data-x)<minabs)
    {
        minabs=root->data-x;
        ans=root->data;
        //return;
    }
    
    if(x<root->data)
    {
        helper(root->left,x,ans,minabs);
    }
    if(x>root->data)
    {
        helper(root->right,x,ans,minabs);
    }
    return;
}


int findCeil(Node* root, int x) 
{ 
    // Base case 
    if (root == NULL) 
        return -1; 
        
  
   int ans=0;
   int minabs=INT_MAX;
   helper(root,x,ans,minabs);
   return ans;
    
    
} 

