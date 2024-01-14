// 1026. Maximum Difference Between Node and Ancestor

// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/?envType=daily-question&envId=2024-01-11

class Solution {
public:

    int diff =0;
    int dfs(TreeNode* root,int cur_max,int cur_min)
    {
            if(root==NULL)
                return -1;
            else
                {
                    cur_max = max(cur_max,root->val);
                    cur_min = min(cur_min,root->val);
                    diff = cur_max - cur_min;

                    diff = max(diff,max(dfs(root->left,cur_max,cur_min),dfs(root->right,cur_max,cur_min)));

                    return diff;
                }
    }


    int maxAncestorDiff(TreeNode* root) {
      

        dfs(root,root->val,root->val);

        return diff;
       
    }
};