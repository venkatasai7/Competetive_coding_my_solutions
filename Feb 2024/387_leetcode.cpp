// 387. First Unique Character in a String

//https://leetcode.com/problems/first-unique-character-in-a-string/description/?envType=daily-question&envId=2024-02-05

class Solution {
public:
    int firstUniqChar(string s) 
    {
        int alpha[26]={0};
        int count =2;
        for(int i =0 ;i<s.size();i++)
            {
            alpha[s[i]-'a']++;
            }
        int flag=0;
        for(int i=0;i<26;i++)
            {
                if(alpha[i]==1)
                    {flag=1;
                    break;}
            }

        if(flag==0)
            return -1;
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(alpha[s[i]-'a']==1)
                    return i;
            }
        }
        
    return 0;
    }
};