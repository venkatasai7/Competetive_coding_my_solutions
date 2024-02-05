// https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/




class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> ans;

        vector<int> a(3,0);
        for(int i=0;i<nums.size();i++)
        {
            a[i%3]=nums[i];

            if(i%3==2)
            {
                if( abs(a[0]-a[1]) > k || abs(a[1]-a[2]) > k || abs(a[2]-a[0]) > k)
                    return {}; 
                ans.push_back(a);

            }
        }


        


        return ans;
    }
};
