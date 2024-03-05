// 268 leetcode

// https://leetcode.com/problems/missing-number/description/?envType=daily-question&envId=2024-02-20

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int m;
    auto maxIt = max_element(nums.begin(), nums.end());
        m= *maxIt;
         cout << "The maximum element is: " << m << endl;
    
    if(m < nums.size())
        return nums.size();
    
    for(int i=1;i<=nums.size();i++)
        ans= ans ^ i;
    
    for(int i=0;i<nums.size();i++)
    ans = ans ^ nums[i];
        return ans ;
    }
};
