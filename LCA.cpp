Node * lca(Node* root ,int n1 ,int n2 )
{
   //Node* ans=NULL;
   if(!root)
   {
       return root;
   }
   if(root->data==n1 || root->data==n2)
   {
       return root;
   }
   Node* ans1=lca(root->left,n1,n2);
   Node* ans2=lca(root->right,n1,n2);
   bool ans=ans1&&ans2;
   if(ans)
   {
       return root;
   }
   if(ans1)
   {
       return ans1;
   }
   if(ans2)
   {
       return ans2;
   }
   return NULL;
}
