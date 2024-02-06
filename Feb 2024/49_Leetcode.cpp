// 49. Group Anagrams

// https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
            vector<vector<string>> final_ans;
            string copy ;
            vector<string> ans;
            map<string,vector<string>> map;
            for(int i=0;i<strs.size();i++)
            {
                copy = strs[i];

                sort(copy.begin(),copy.end());
                map[copy].push_back(strs[i]);
            }

            for(auto i : map)
            {
                ans={};
                //cout<<"i.first : "<<i.first<<endl;
                for(auto j : i.second)
                    ans.push_back(j) ;               
               // cout<<endl;
               final_ans.push_back(ans);
            }


        return final_ans;
    }
};