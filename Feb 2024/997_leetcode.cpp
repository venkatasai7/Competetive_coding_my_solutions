// 997. Find the Town Judge
//https://leetcode.com/problems/find-the-town-judge/?envType=daily-question&envId=2024-02-22


class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> map(n,0);
        int l = trust.size();
        for(int i=0;i<l;i++)
        {
            if(trust[i][0] != trust[i][1])
            {
                map[trust[i][1]-1]++;
                map[trust[i][0]-1] = INT_MIN;
            }
            
        }
    for(int i=0;i<n;i++)
        {
            if(map[i]==n-1)
                return i+1;
        }

    return -1;


return 0;
    }
};