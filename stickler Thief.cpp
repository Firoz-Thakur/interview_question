https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1#




class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    ll FindMaxSum(ll arr[], ll n)
    {
        // Your code here
    //very good question of dp 
    
    if(n==1)
     return arr[0];
    if(n==2)
     return max(arr[0],arr[1]);
    
    ll dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[1],arr[0]);
    
    for(ll i=2;i<=n;i++)
    {
      dp[i]=max(dp[i-1],dp[i-2]+arr[i]);    
    }
    
    return dp[n-1];
        
    }
};
