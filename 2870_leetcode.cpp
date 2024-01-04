// 2870. Minimum Number of Operations to Make Array Empty

// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/description/?envType=daily-question&envId=2024-01-04

class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        map<int,int>  hash;   

        for(auto i : nums)
        {
            if(hash.find(i) == hash.end())
                hash[i] = 1;
            else
                hash[i]++;
        }
        int ans =0;
        for(auto k : hash)
           {
               cout<<k.first << " - " << k.second <<endl ;
               if(k.second == 1) return -1;
                
                if(k.second %3 ==1 )
                    {
                    ans += (k.second/3) -1 ;
                    ans+=2;
                    }
                else {
                    ans+= k.second/3;
                    ans+=((k.second%3)/2);                     
                }
           }
       return ans;
    }
};