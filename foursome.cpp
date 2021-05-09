https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1#

// time complexity O(n^3)
//same as that of the pair sum and triplet sum
class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int ksum) {
        // Your code goes here
        //i love to live in my own ways soemetimes i was c
        int n=arr.size();
        vector<vector<int>> ans;
        
        sort(arr.begin(),arr.end());
        
        set<vector<int>> s;
        
        for(int i=0;i<n-3;i++)
        {
            for(int l=i+1;l<n-2;l++)
            {
            
              int j=l+1;
              int k=n-1;
               while(j<k)
               {
              
                if((arr[i]+arr[l]+arr[j]+arr[k])==ksum)
                {
               //  vector<int> v;
                 s.insert({arr[i],arr[l],arr[j],arr[k]});
                 j++;
                 k--;
               }
               else if((arr[i]+arr[l]+arr[j]+arr[k])>ksum)
                 k--;
               else
                 j++;
             }    
            
            }
        }
        for(auto x: s)
        {
            ans.push_back(x);
        }
        
        
        
      return ans;  
    }
};
