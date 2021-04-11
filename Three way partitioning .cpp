//that array is divided into three parts.
// variation of the problem sort the number of the array if the array having only the nubmers 0s,1s,2s    

https://practice.geeksforgeeks.org/problems/three-way-partitioning/1#


void threeWayPartition(vector<int>& ar,int a, int b)
    {
        // code here 
        int i=0;
        int j=0;
        int k=ar.size()-1;
        while(j<=k)
        {
            if(ar[j]<a)
            {
                swap(ar[j],ar[i]);
                i++;
                j++;
            }
            else if(ar[j]>=a && ar[j]<=b)
            {
                j++;
            }
            else
            {
                swap(ar[j],ar[k]);
                k--;
            }
        }
    }
    
    
