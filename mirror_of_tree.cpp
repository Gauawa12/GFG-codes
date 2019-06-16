void mirror(Node* node) 
{
     if(!node)
     {
         return;
     }
     mirror(node->left);
     mirror(node->right);
     Node* l=node->left;
     Node* r=node->right;
     node->left=r;
     node->right=l;
