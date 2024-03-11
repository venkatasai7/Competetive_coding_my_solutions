// 791. Custom Sort String

// https://leetcode.com/problems/custom-sort-string/?envType=daily-question&envId=2024-03-11

class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> tab;
        int n = s.size();
        for(int i=0;i<n;i++)
            tab[s[i]]++;

        string ans="";
        n = order.size();
        int count =0;
        for(int i=0;i<n;i++)
        {
            if(tab.find(order[i])!=tab.end())
            {
                count = tab[order[i]];
                while(count>0)
                {
                    //strcat(ans,tab[order[i]]);
                    ans += order[i];
                    count--;
                }
                tab.erase(order[i]);
            }
           // cout<<ans <<endl;
        }


            for(auto it = tab.begin();it!=tab.end();it++)
            {
               // cout<<it->first<<endl;
                 count = tab[it->first];
                while(count>0)
                {
                    //strcat(ans,tab[order[i]]);
                    ans += it->first;
                    count--;
                }
            }

        return ans;  
    }
};
