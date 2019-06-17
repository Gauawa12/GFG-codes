Node *createTree(int p[], int n)
{
    Node* root=NULL;
    unordered_map<int,Node*>m;
    unordered_map<int,int>occ;
    
    for(int i=0;i<n;i++)
    {
        Node* temp=new Node(i);
        m[i]=temp;
    }
    //cout<<m[0]<<" "<<m[1]<<endl;
    for(int i=0;i<n;i++)
    {
        if(p[i]==-1)
        {
            root=m[i];
        }
        else
        {
            if(occ.count(p[i])==0)
            {
                m[p[i]]->left=m[i];
            }
            else if(occ[p[i]]==1)
            {
                m[p[i]]->right=m[i];
            }
            occ[p[i]]++;
            
        }
    }
    
    return root;
    
    
    
}
