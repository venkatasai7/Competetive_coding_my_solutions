// 1609. Even Odd Tree

// https://leetcode.com/problems/even-odd-tree/?envType=daily-question&envId=2024-02-29


class Solution 
{
    public:


    bool isEvenOddTree(TreeNode* root) 
    {
        //vector<vector<int>> ans;
        vector<int> v;
        if(root==NULL)
            return 0;
        else
            {
                queue<TreeNode*> q;
                q.push(root);
                int level =0;
                while(!q.empty())
                {
                    v={};
                    int n =q.size();
                    for(int i=0;i<n;i++)
                    {
                        TreeNode* k = q.front();
                        if(k->left!=NULL)
                            q.push(k->left);
                            
                        if(k->right!=NULL)
                            q.push(k->right);
                        q.pop();
                        v.push_back(k->val);
                        
                    }
                    //cout<<level<<" : ";
                    for(int j=0;j<v.size();j++)
                    {
                        if(level%2 == v[j]%2)
                            return 0;
                        if(level%2==0 && (j<v.size()-1 && v[j]>= v[j+1]))
                            return 0;
                        if(level%2!=0 && (j<v.size()-1 && v[j]<=v[j+1]))
                            return 0;                            
                    }
                        
                    //cout<<endl;
                    level++;
                    //ans.push_back(v);
                }
            }

        
        return 1;
    }
};
