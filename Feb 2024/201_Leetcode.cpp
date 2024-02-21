// 201. Bitwise AND of Numbers Range

// https://leetcode.com/problems/bitwise-and-of-numbers-range/?envType=daily-question&envId=2024-02-21

class Solution {
public:
  
int rangeBitwiseAnd(int left, int right) {
    int ans = 0;
    
    while(left!=right)
    {
        left >>= 1;
        right >>= 1;
        ans++;
    }

    return left<<ans;
}

};