// 1347. Minimum Number of Steps to Make Two Strings Anagram

// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/description/?envType=daily-question&envId=2024-01-13

class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> hash1,hash2;
        char ch='a';
        for(int i=0;i<26;i++)
        {
            hash1[ch]=0;
            hash2[ch]=0;
            ch++;
        }

        for(int i=0;i<s.size();i++)
                hash1[s[i]]++;

        for(int i=0;i<t.size();i++)
                hash2[t[i]]++;

        ch='a';
        int diff =0; 
        for(int i=0;i<26;i++)
        {
        //cout<<ch<<" > "<< hash1[ch]<< " - " <<hash2[ch]<<" = "<<abs(hash1[ch] - hash2[ch])<<endl;
        
        diff=diff+ abs(hash1[ch] - hash2[ch]);
        ch++;
        }
        //cout<<diff;
        return diff/2;
    }
};