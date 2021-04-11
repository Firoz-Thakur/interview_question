https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1#

sliding window tec:

int minSwap(int *arr, int n, int k) {
    // Complet the function
   int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
            c++;
    }
    
    int greater_number=0;
    for(int i=0;i<c;i++)
    {
        if(arr[i]>k)
         greater_number++;
    }
   
    int i=0;
    int j=c-1;
    int ans=INT_MAX;
    while(j<n-1)
    {
        ans=min(greater_number,ans);
        if(arr[i]>k)
        {
            greater_number--;
        }
       
       if(arr[j+1]>k)
       {
           greater_number++;
       }
       j++;
       i++;
       
       
    }
    
   return min(greater_number,ans);
}
