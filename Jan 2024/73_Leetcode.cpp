// 73. Set Matrix Zeroes

// https://leetcode.com/problems/set-matrix-zeroes/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<int> row(201,0);
        vector<int> col(201,0);

        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
                {
                    if(matrix[i][j]==0)
                        {
                            row[i]=1;
                            col[j]=1;
                        }
                }
           // cout<<endl;
        }

        //for(int i=0;i<matrix.size();i++)
            //cout<<row[i]<<" ";
        
        cout<<endl;
        //for(int i=0;i<matrix[0].size();i++)
          //  cout<<col[i]<<" ";

    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            if(row[i]==1 || col[j]==1)
                matrix[i][j]=0;
        }
    }

    }
};