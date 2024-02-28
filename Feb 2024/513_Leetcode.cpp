class Solution {
public:

    int findBottomLeftValue(TreeNode* root) {
    queue<TreeNode* > q;
    vector<int> v;
    q.push(root);
    while(!q.empty())
    {
        v={};    
        int l = q.size();
        for(int i=0;i<l;i++)
            {
                TreeNode* f = q.front();
                if(f->left!=NULL)
                    q.push(f->left);
                if(f->right!=NULL)
                    q.push(f->right);
                v.push_back(f->val);
                q.pop();
            }
    }

    return v[0];

         
    }
};
