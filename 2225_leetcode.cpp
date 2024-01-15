//2225. Find Players With Zero or One Losses

// https://leetcode.com/problems/find-players-with-zero-or-one-losses/?envType=daily-question&envId=2024-01-15

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> m;
        
        for(auto i : matches)
        {
           // cout<<i[0]<< " > "<<i[1]<<endl;
            if(m.find(i[1])== m.end())
                m[i[1]]=1;
            else
                m[i[1]]++;
            if(m.find(i[0])== m.end())
                m[i[0]]=0;

            

        }
         vector<vector<int>> ans(2);

        for(auto i : m)
        {
            if (i.second ==0)
                ans[0].push_back(i.first);
                //cout<<i.first<<" - "<<i.second<<endl;
            else if (i.second ==1)
                ans[1].push_back(i.first);
                //cout<<i.first<<" - "<<i.second<<endl;
        }
    
    return ans;
    
    }
};