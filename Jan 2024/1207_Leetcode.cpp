// 1207. Unique Number of Occurrences

//https://leetcode.com/problems/unique-number-of-occurrences/?envType=daily-question&envId=2024-01-16

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;

        for(int i=0;i<arr.size();i++)
        {
            if(m.find(arr[i])!= m.end())
                m[arr[i]]++;
            else
                m[arr[i]]=1;
        }
        map<int,int> o;
        for(auto i : m)
        {
            if(o.find(i.second)!=o.end())
                return false;

            else
                o[i.second]=1;
        }

        return true;
    }
};