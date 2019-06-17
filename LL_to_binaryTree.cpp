void convert(Node *head, TreeNode *&root) {
    TreeNode *ans=root;
    TreeNode* temp=new TreeNode(head->data);
       root=temp;
       head=head->next;
       queue<TreeNode*>q;
       q.push(temp);
    while(head!=NULL && !q.empty())
    {
       TreeNode* t=q.front();
       q.pop();
       t->left=new TreeNode(head->data);
       if(head->next)
       {
           t->right=new TreeNode(head->next->data);
       }
       q.push(t->left);
       q.push(t->right);
        if(head->next)
        {
            head=head->next->next;

        }
        else
        {
            head=head->next;
        }
    }
    
    //return ans;
}
