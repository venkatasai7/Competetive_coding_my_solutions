/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p==NULL && q==NULL)
            return true;
        if(((p!=NULL)? p->val : -1000000)!=((q!=NULL)? q->val : -100000))
            return false;
        else if(p!=NULL && q==NULL)
            return false;
        else if(p==NULL && q!=NULL)
            return false;
        else  
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);    
    }
};
