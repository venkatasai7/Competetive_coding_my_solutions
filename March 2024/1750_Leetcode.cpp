//1750. Minimum Length of String After Deleting Similar Ends
 
// https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/?envType=daily-question&envId=2024-03-05


class Solution {
public:
    int minimumLength(string s) {

        int l =0,r = s.length()-1;
        //cout<<l<<" "<<r<<endl;
        while( l<r && s[l]==s[r])
        {
           // cout<<l<<" "<<r<<endl;
            char ch = s[l];
            while(l<=r && s[l]==ch)
                l++;
            while(l<=r && s[r]==ch)
                r--;
        }

        //cout<<"\nFinal : "<<l<<" "<<r<<endl;
        
        return (r-l+1 >=0) ? r-l+1 : 0;
    }
};