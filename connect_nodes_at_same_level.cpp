void connect(Node *p)
{
   queue<Node*>q;
   q.push(p);
   while(!q.empty())
   {
       int s=q.size();
       while(s>=1)
       {
           if(s==1)
           {
               Node* t=q.front();
               q.pop();
               if(t->left)
               {
                   q.push(t->left);
                   
               }
               
               if(t->right)
               {
                   q.push(t->right);
               }
               s--;
           }
           else
           {
               Node* t=q.front();
               q.pop();
               Node* t1=q.front();
               t->nextRight=t1;
               if(t->left)
               {
                   q.push(t->left);
                   
               }
               
               if(t->right)
               {
                   q.push(t->right);
               }
               s--;
           }
           
       }
   }
}
