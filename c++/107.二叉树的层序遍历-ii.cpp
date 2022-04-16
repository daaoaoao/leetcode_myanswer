/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层序遍历 II
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
    vector<vector<int>>  levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> qe;
        if(root!=NULL )qe.push(root);
        while(!qe.empty())
        {
            vector<int> temp;
            int q_size=qe.size();
            for(int i=0;i<q_size;i++)
            {
                TreeNode* t=qe.front();
                qe.pop();
                temp.push_back(t->val);
                if(t->left)qe.push(t->left);
                if(t->right)qe.push(t->right);
            }
            ans.push_back(temp);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

