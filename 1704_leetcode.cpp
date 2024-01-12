// 1704. Determine if String Halves Are Alike

// https://leetcode.com/problems/determine-if-string-halves-are-alike/description/?envType=daily-question&envId=2024-01-12

class Solution {
public:
    int vowelCount(string c)
    {
        vector<char> v={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        int count=0;
        for (int i=0;i<c.size();i++)
        {
            if(find(v.begin(),v.end(),c[i])!=v.end())
                count++;
        }
        return count;
    }
    bool halvesAreAlike(string s) {
        string a ,b;
        for ( int i=0;i<s.length();i++)
        {
            if(i< s.length()/2)
                a+= s[i];
            else
                b+=s[i];
        }
        //cout<<a<<endl;
        //cout<<b<<endl;

        //cout<<vowelCount(a)<<endl;
        //cout<<vowelCount(b)<<endl;
        if(vowelCount(a) == vowelCount(b))
            return true;
        else
            return false;
    }
};