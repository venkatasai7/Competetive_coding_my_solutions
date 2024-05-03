//https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description/?envType=daily-question&envId=2024-05-02

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map <int,int>  log;
        int ans= -1;
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<< " ";
                if( nums[i]>0 && log[-nums[i]]==1 )
                    {ans = (nums[i] > ans) ? nums[i] : ans;
                    //cout<<"case- 1"<<endl;
                    }
                else if ( nums[i]<0 && log[abs(nums[i])]==1 )
                    {ans = (abs(nums[i]) > ans) ? abs(nums[i]) : ans;
                                        //cout<<"case- 2"<<endl;
                    }

                else if (log[nums[i]]!=1)
                    {log[nums[i]]=1;             //       cout<<"case- 3"<<endl;
                    }

            
    
        }


        return ans;
    }
};
