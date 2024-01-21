// 2125. Number of Laser Beams in a Bank

// https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/?envType=daily-question&envId=2024-01-03


class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       vector<int> count;
        for(auto i : bank)
        {  int c=0;
                for(auto j : i)
                {
                    if(j=='1')
                        c+=1;
                }
                count.push_back(c);
        }
        
int ans =0;
        for(int k = 0;k<count.size();k++)
        {
            int p = k+1;
            while(p < count.size() && count[p]==0)
                {p++;}

            if(p<count.size())
                ans += count[k]*count[p];
        }

        return ans;
    }
};