// 543. Diameter of Binary Tree
// https://leetcode.com/problems/diameter-of-binary-tree/?envType=daily-question&envId=2024-02-27
class Solution {
public:

    int maxdist;
    int dist(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int l  = (root->left)!=NULL ? 1+dist(root->left): 0;
        int r  = (root->right)!=NULL ? 1+dist(root->right): 0;
        if(l+r > maxdist)
            maxdist = l+r;
       // cout<< root->val<<" "<<maxdist<<endl;

        return max(l,r);



    }

    int diameterOfBinaryTree(TreeNode* root) {
        maxdist=0;
        dist(root);
        return maxdist;
    }
};
