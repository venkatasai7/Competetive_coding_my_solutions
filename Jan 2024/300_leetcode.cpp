//300. Longest Increasing Subsequence

// https://leetcode.com/problems/longest-increasing-subsequence/description/?envType=daily-question&envId=2024-01-05


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        if(nums.size()<=1)
            return nums.size();
        vector<int> dp (nums.size());

        for(int i=0;i<nums.size();i++)
                dp [i] =1;

        for (int i =1;i<nums.size();i++)
        {
            for(int j = 0;j<i;j++)
            {
                if(nums[i] > nums[j])
                    dp[i] = max(dp[i],dp[j]+1);
            }
        }

        int ma =0;
            for (int i =1;i<nums.size();i++)
            {
                    ma = (ma > dp[i]) ? ma : dp[i];
            }

        return ma ;
    }
};