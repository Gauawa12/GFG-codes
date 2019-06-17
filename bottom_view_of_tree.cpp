void bottomView(Node *root)
{
   queue<pair<Node*,int>>q;
   map<int,int>m;
   q.push({root,0});
   while(!q.empty())
   {
       Node* t=q.front().first;
       int d=q.front().second;
       q.pop();
       
       m[d]=t->data;
       
       if(t->left)
       {
           q.push({t->left,d-1});
       }
       if(t->right)
       {
           q.push({t->right,d+1});
       }
   }
   
   for(auto x:m)
   {
       cout<<x.second<<" ";
   }
}
//map stores data in sorted value according to key while unorderd_map stores data in raw form.
