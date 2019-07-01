
In an infinite binary tree where every node has two children, the nodes are labelled in row order.

In the odd numbered rows (ie., the first, third, fifth,...), the labelling is left to right, while in the even numbered rows (second, fourth, sixth,...), the labelling is right to left.

Given the label of a node in this tree, return the labels in the path from the root of the tree to the node with that label.

 

Example 1:

Input: label = 14
Output: [1,3,4,14]

Example 2:

Input: label = 26
Output: [1,2,6,10,26]

 

Constraints:

    1 <= label <= 10^6


Sol : 

vector<int> pathInZigZagTree(int l) {
        int c=0;
        int a=l;
        while(a>0)
        {
            c++;
            a=a>>1;
        }
        vector<int>counter;
        counter.push_back(2);
        for(int i=1;i<c;i++)
        {
            int t=counter[counter.size()-1];
            counter.push_back(2*t + 1);
        }
        
        int i=c-1;
        
        vector<int>ans;
        ans.push_back(l);
        while(i>0)
        {
            l=counter[i]-l;
            int t=floor(l/2);
            ans.push_back(t);
            l=t;
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
