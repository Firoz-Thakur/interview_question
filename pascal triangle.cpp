class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
       vector<vector<int>>  v ;
       
       for(int i=0;i<numRows;i++)
       {
          vector<int> temp;
          for(int j=0;j<=i;j++){
             if(j==0 || j==i)
              temp.push_back(1);
            else
             temp.push_back(v[i-1][j-1]+v[i-1][j]);
        }
         v.push_back(temp);
       }
        
     return v;   
    }
};
