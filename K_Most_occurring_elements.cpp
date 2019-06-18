int print_N_mostFrequentNumber(int arr[], int n, int k) 
{ 
	map<int,int>freq;
	
	for(int i=0;i<n;i++)
	{
	    freq[arr[i]]++;
	}
	vector<int>v;
	for(auto x:freq)
	{
	    v.push_back(x.second);
	}
	
	
	
	
	priority_queue<int,vector<int>,greater<int> >pq;
	for(int i=0;i<k;i++)
	{
	    pq.push(v[i]);
	}
	for(int i=k;i<v.size();i++)
	{
	    if(v[i]>pq.top())
	    {
	        pq.pop();
	        pq.push(v[i]);
	    }
	}
	int ans=0;
	
	while(!pq.empty())
	{
	    ans=ans+pq.top();
	    pq.pop();
	}
	return ans;
} 
