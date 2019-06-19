#define lli long long int
long long minCost(long long arr[], long long n)
{
    priority_queue<lli,vector<lli>,greater<lli> >pq;
    for(lli i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    lli a,b,ans=0;
    vector<lli>v;
    while(pq.size()>1)
    {b=0;
        a=pq.top();
        pq.pop();
        if(!pq.empty())
        {
            b=pq.top();
            pq.pop();
        }
        v.push_back(a+b);
        pq.push(a+b);
    }
    
    for(auto x:v)
    {
        ans+=x;
    }
   // ans+=pq.top();
    return ans;
}
 
