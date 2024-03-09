// 2540. Minimum Common Value
// https://leetcode.com/problems/minimum-common-value/

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(0);

        int ind1=0,ind2=0;
        while(ind1<nums1.size() && ind2 < nums2.size())
        {
            
                if(nums1[ind1] > nums2[ind2])
                    ind2++;
                else if(nums1[ind1] < nums2[ind2])
                    ind1++;
                else 
                return nums1[ind1];
        }

        return -1;
    }
};
