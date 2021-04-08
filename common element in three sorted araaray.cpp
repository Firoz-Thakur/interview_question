https://practice.geeksforgeeks.org/problems/common-elements1132/1# 

public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
           long long  int i=0;
            long long int j=0;
            long long int k=0;
            vector<int> v;
            
           unordered_map<int,bool> mp;
            while(i<n1 && j<n2 && k<n3)
            {
              if(A[i]==B[j] && B[j]==C[k] && mp.find(A[i])==mp.end() )
               {
                    v.push_back(A[i]);
                    mp[A[i]]=true;
                    i++;
                    j++;
                    k++;
                   
               }
              else if(A[i]<B[j] )
              {
                  i++;
              }
               else if(B[j]<C[k])
              {
                  j++;
              }
               else
              {
                  k++;
              }
                
            }
        return v;
        
        }
