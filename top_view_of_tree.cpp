void topView(Node *root)
{
    if(!root)
    {
        return;
    }
    queue<pair<Node*,int>>q;
    q.push({root,0});
    unordered_map<int,int>m;
    while(!q.empty())
    {
        Node* t=q.front().first;
        int d=q.front().second;
        q.pop();
        
        if(m.count(d)==0)
        {
            cout<<t->data<<" ";
            m[d]++;
        }
        if(t->left)
        {
            q.push({t->left,d-1});
        }
        if(t->right)
        {
            q.push({t->right,d+1});
        }
        
    }
}
