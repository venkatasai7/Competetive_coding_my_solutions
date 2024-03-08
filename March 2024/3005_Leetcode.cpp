// 3005. Count Elements With Maximum Frequency
// https://leetcode.com/problems/count-elements-with-maximum-frequency/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        map<int,int> tab;
        int maxfreq = 1;
        int siz = nums.size();
        for(int i =0;i < siz;i++)
        {
            if(tab.find(nums[i])==tab.end())
            {
                tab[nums[i]]=1;
            }
            else
            {
                tab[nums[i]]++;
                maxfreq = (maxfreq <= tab[nums[i]]) ? tab[nums[i]] : maxfreq;
            }
        }

        int count =0;

        for (auto it = tab.begin();it!= tab.end();it++)
            {
                if(it->second == maxfreq)
                    count ++;
            }

        return count* maxfreq;
    }
};
