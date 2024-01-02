//2610. Convert an Array Into a 2D Array With Conditions

//https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/?envType=daily-question&envId=2024-01-02


class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> Hashtable ;

        for(int i =0;i<nums.size();i++)
        {
            if(Hashtable.find(nums[i])== Hashtable.end())
                Hashtable[nums[i]] =1;
            else
                Hashtable[nums[i]]++;
        }
        
        int max =0;
        for( auto i : Hashtable)
        {
            cout<<i.first << " "<<i.second <<"\n";
            max = (max < i.second ) ? i.second : max ;
        }
        cout<<max;

         vector<vector<int>> ans;

         for(int i=0;i<max;i++)
             ans.push_back(vector<int> ());
         

        for( auto i : Hashtable)
        {
            //cout<<i.first << " "<<i.second <<"\n";
            for(int j =0;j<i.second;j++)
            {
                ans[j].push_back(i.first);
            }
        }


        return  ans;
    }
};