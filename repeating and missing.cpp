// repeat and missing 
//
class Solution{
public:
    int *findTwoElement(int *ar, int n) {
        // code here
    int *res = new int(2);    
    for(int i=0;i<n;i++)
    {
        if(ar[abs(ar[i])-1]>=0)
        {
            ar[abs(ar[i])-1]=- ar[abs(ar[i])-1];
        }
        else
        {
         res[0]=abs(ar[i]);
        }
    
    }
    
    
    for(int i=0;i<n;i++)
    {
        if(ar[i]>0)
          res[1]=i+1;
    }

      return res;  
    
    }
};



// most important metod : just change the problem into ( 2 unique element in the arry of duplicate element)


public:
    int *findTwoElement(int *arr, int n) {
   
    int *res = new int(2);    
    int rep;
    int miss;
    int xr=0;
    for(int i=1;i<=n;i++)
        xr^=i;
    for(int i=0;i<n;i++)
        xr^=arr[i];
  //  cout<<xr<<endl;
    //3^4  ==== 7 (111)  ( 1 1)
       int first=xr;
       int kth;
        int c=0;
       while(first)
       {
           if(first&1)
           {
               kth=c;
               break;
           }
           first=first/2;
           c++;
       }
  //  int first=0;
  //cout<<" k"<<kth<<endl;
    first=0;
    int second=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]>>kth) & 1 )
        {
            first^=arr[i];
        }
        else
        {
            second^=arr[i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        if((i>>kth) & 1 )
        {
            first^=i;
        }
        else
        {
            second^=i;
        }
    }
  //  cout<<first<<"f s "<<second<<endl;
    bool f=false;
    for(int i=0;i<n;i++)
    {
        if(first==arr[i])
        {
            f=true;
            break;
        }
    }
    if(f==false)
    {
        miss=first;
        rep=second;
    }
    else
    {
        rep=first;
        miss=second;
    }
    
  res[0]=rep;
  res[1]=miss;
  return res;
 }
