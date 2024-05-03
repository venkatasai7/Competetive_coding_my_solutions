//165. Compare Version Numbers

// https://leetcode.com/problems/compare-version-numbers/?envType=daily-question&envId=2024-05-03
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int ans=0;

        vector<int> v1,v2;
        bool flag = true;

        stringstream ss1(version1); 
        while (getline(ss1, version1, '.')) 
            v1.push_back(stoi(version1)) ;

        stringstream ss2(version2); 
        while (getline(ss2, version2, '.')) 
            v2.push_back(stoi(version2));

        while(v1.size() < v2.size())
            v1.push_back(0);

        while(v2.size() < v1.size())
            v2.push_back(0);

    for(int i=0;i<v1.size();i++)
    {
        if(v1[i] < v2[i])
            return -1;
        else if (v2[i] < v1[i])
            return 1;
    }  
        
      return 0;
    }
};
