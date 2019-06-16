int ht(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=ht(root->left)+1;
    int r=ht(root->right)+1;
    return max(l,r);
}

int diameter(Node* node)
{
   int ans=-1;
   if(!node)
   {
       return 0;
   }
   ans=ht(node->left)+ht(node->right)+1;
   int l=diameter(node->left);
   int r=diameter(node->right);
   ans=max(ans,max(l,r));
   return ans;
}
