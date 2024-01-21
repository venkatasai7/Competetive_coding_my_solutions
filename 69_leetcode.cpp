//  69. Sqrt(x)

// https://leetcode.com/problems/sqrtx/
class Solution {
public:
    int mySqrt(int x) {
       long long  i=0,ans=0;
       if(x ==0 || x==1)
            return x;
        while(i<x/2+1 && i*i <=x)
        {   i++; }

        return i-1;
    }
};