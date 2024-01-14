//1657. Determine if Two Strings Are Close

//https://leetcode.com/problems/determine-if-two-strings-are-close/?envType=daily-question&envId=2024-01-14


class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length())
            return false;
        
        map<char,int> m1,m2;
        char ch = 'a';

        for(int i=0;i<26;i++)
        {
            m1[ch]=0;
            m2[ch]=0;
            ch++;
        }

        for(int i=0;i<word1.length();i++)
            m1[word1[i]]++;
        for(int i=0;i<word2.length();i++)
            m2[word2[i]]++;

        ch = 'a';
        vector<int> v1,v2;

        for(int i=0;i<26;i++)
        {
            if ((m1[ch]==0 && m2[ch]!=0) || (m1[ch]!=0 && m2[ch]==0))
                return false;
            
            else
            {
                if(m1[ch]!=0)
                v1.push_back(m1[ch]);

                if(m2[ch]!=0)
                v2.push_back(m2[ch]);
            }

            ch++;
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
                return false;
        }

        return true;
        

    }
};