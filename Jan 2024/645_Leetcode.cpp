// 645. Set Mismatch

//https://leetcode.com/problems/set-mismatch/?envType=daily-question&envId=2024-01-21

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> m;
        int a=0,b=0;
        vector<int> ans;

        for(int i=0 ;i<nums.size();i++)
            {
                if(m.find(nums[i]) == m.end())
                    m[nums[i]]=1;
                else
                    m[nums[i]]++;
            }

        for(int i=1;i<=nums.size();i++)
        {
            if(m.find(i)==m.end())
                a=i;
            else if (m[i]==2)
                b=i;
        }

        ans.push_back(b);
        ans.push_back(a);


        return ans;
    }
};