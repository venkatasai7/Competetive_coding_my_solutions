// 872. Leaf-Similar Trees

// https://leetcode.com/problems/leaf-similar-trees/description/?envType=daily-question&envId=2024-01-10



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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        stack<TreeNode*> s1;
        vector<int>v1;
        stack<TreeNode*> s2;
        vector<int>v2;       

        if(root1!= NULL)
            s1.push(root1);

        while(!s1.empty())
        {
            TreeNode* z1=s1.top();
            s1.pop();
            if(z1->left!=NULL )
                    s1.push(z1->left);
            if(z1->right != NULL)
                   s1.push(z1->right);

            if(z1->left ==NULL  && z1->right == NULL) 
               v1.push_back(z1->val);

        }

        if(root2!= NULL)
            s2.push(root2);

        while(!s2.empty())
        {
            TreeNode* z2=s2.top();
            s2.pop();
            if(z2->left!=NULL )
                    s2.push(z2->left);
            if(z2->right != NULL)
                   s2.push(z2->right);

            if(z2->left ==NULL  && z2->right == NULL)
               v2.push_back(z2->val);
        }


        if(v1.size()==v2.size())
        {

                for(int i=0;i<v1.size();i++)
                {
                    if(v1[i] != v2[i])
                        return false;

                }

            return true;

        }
        else
            return false;


    }
};