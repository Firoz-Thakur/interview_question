https://leetcode.com/problems/majority-element-ii/submissions/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     //there can be atmost two majority element this is for sure ,not more than two majority element //can be there, but there can be zero majority elemnt.
 //    2 2 2 3 3 2 2 2 
  //  n/3--> two majority element 
   //  3 3 3 2 2 2 (6/3)=2 
     // 2 2 3 3   --> 4/3=1       
     // 2 2 3 -- only one majority element
     // 2 3 5 6 -- no majority elemtt 4/3=1 ( i nead greater than 1 ) 
          //  c1=3
     // 2 2 2 3 3 4 4 4   
        int num1=INT_MIN; // first i were taking -1 as of my first element , but the array range is //negative
        int num2=INT_MIN;
        int c1=0;
        int c2=0; 
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==num1)
                c1++;
            else if(nums[i]==num2)
                c2++;
            else if(c1==0)
            {
                num1=nums[i];
                c1=1;
            }
            else if(c2==0)
            {
               num2=nums[i];
               c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        int count1=0;
        int count2=0;
       for(int i=0;i<nums.size();i++)
       {
           if(num1==nums[i])
           {
               count1++;
           }
            if(num2==nums[i])
           {
               count2++;
           }   
       }
        vector<int> v;
        if(count1>nums.size()/3)
        {
            v.push_back(num1);
        }
       if(count2>nums.size()/3)
        {
            v.push_back(num2);
        }
         
    return v;   
    }
};
