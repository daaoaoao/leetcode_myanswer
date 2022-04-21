/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    int getHeight(TreeNode* root){
        if(root == NULL) return 0;
        int l=getHeight(root->left);
        if(l==-1) return -1;
        int r=getHeight(root->right);
        if(r==-1) return -1;
        return abs(l-r)>1?-1:max(l,r)+1;

    }
    bool isBalanced(TreeNode* root) {
        return getHeight(root) ==-1?false:true;
    }
};
// @lc code=end

