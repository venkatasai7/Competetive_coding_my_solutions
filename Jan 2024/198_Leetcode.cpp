// 198. House Robber

// https://leetcode.com/problems/house-robber/?envType=daily-question&envId=2024-01-21

class Solution {
public:
    int rob(vector<int>& nums) {
        int ans=0;
        if(nums.size()==0)
            return 0;
        else if(nums.size()==1)
            return nums[0];
        else if(nums.size()==2)
            return ((nums[0]>nums[1])? nums[0] : nums[1]);
        else if(nums.size()==3)
            return ((nums[0]+nums[2]>nums[1])? nums[0]+nums[2] : nums[1]);

      vector<int> maxsum(nums.size(),0) ;

    maxsum[0]=nums[0];
    maxsum[1] = nums[1];
    maxsum[2]= nums[0]+nums[2];
    int m =0;
    int k = maxsum.size();
        for(int i=3;i<k;i++)
            {
              m = max(maxsum[i-2],maxsum[i-3]);
              maxsum[i] = m +nums[i];  
            }

        ans = max(maxsum[k-1],maxsum[k-2]);
        return ans;
    }
};