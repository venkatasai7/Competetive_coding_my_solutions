// 2864. Maximum Odd Binary Number

// https://leetcode.com/problems/maximum-odd-binary-number/?envType=daily-question&envId=2024-03-01

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count_0 = count(s.begin(),s.end(),'0');
        int count_1= s.length() - count_0;

        cout<<count_0 << " "<<count_1;

    string ans="";
        while(count_1 > 1)
        {
            ans  = ans + "1";
            count_1--;
        }
            

        while(count_0-- >0)
           ans = ans + "0";

        if(count_1==1)
            ans = ans + "1";
        
    return ans;

    }
};
