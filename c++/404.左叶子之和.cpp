/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
 */

// @lc code=start
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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        int lf=sumOfLeftLeaves(root->left);//左叶子之和
        int rf=sumOfLeftLeaves(root->right);//右叶子之和

        int mid=0;
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
            mid=root->left->val;
        
        int sum=lf+rf+mid;
        return sum;
    }
};
// @lc code=end

