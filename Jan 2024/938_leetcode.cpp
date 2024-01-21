// 938. Range Sum of BST

// https://leetcode.com/problems/range-sum-of-bst/description/?envType=daily-question&envId=2024-01-08



class Solution {
public:

    int rangeSumBST(TreeNode* root, int low, int high) {
        
        queue<TreeNode*> q;
        vector<int> ans;
        
        if(root!=NULL)
        q.push(root);

        while(!q.empty())
        {
           
            if(q.front()!=NULL)
            {
                if(q.front()->left != NULL && q.front()->val >= low)
                    q.push(q.front()->left);
                if (q.front()->right != NULL && q.front()->val <= high)
                    q.push(q.front()->right);

                //cout<<q.front()->val<<" ";

                if(q.front()->val >= low && q.front()->val <= high )
                        ans.push_back(q.front()->val);

                q.pop();
            }

        }
        return accumulate(ans.begin(), ans.end(), 0);
    }
};