// 455. Assign Cookies

//https://leetcode.com/problems/assign-cookies/description/?envType=daily-question&envId=2024-01-02

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        vector<int> x = g;
       
       sort(x.begin(),x.end(),greater <>());
    
         vector<int> y = s;
       
       sort(y.begin(),y.end(),greater <>());
        int i=0,j=0,count =0;
            while(i< x.size() && j< y.size())
            {
                if(x[i] <= y[j])
                {
                    i++;j++;count++;
                }
                else
                {
                    i++;
                }
            }
       
       return count; 
    }
};