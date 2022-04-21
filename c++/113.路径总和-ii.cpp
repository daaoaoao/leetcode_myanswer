/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void dfs(TreeNode* root,int sum)
    {
        if(root->left==NULL && root->right==NULL && sum==0)
        {
            res.push_back(path);
            return;
        }
        if(root->left==NULL && root->right==NULL)
            return;
        if(root->left!=NULL)
        {
            path.push_back(root->left->val);
            dfs(root->left,sum-root->left->val);
            path.pop_back();
        }
        if(root->right!=NULL)
        {
            path.push_back(root->right->val);
            dfs(root->right,sum-root->right->val);
            path.pop_back();//回溯回到根节点
        }
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return res;
        path.push_back(root->val);
        dfs(root,targetSum-root->val);
        return res;
    }
};
// @lc code=end

