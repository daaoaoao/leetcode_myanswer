/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    void traversal(TreeNode* root,vector<int>& res)
    {
        if(root==NULL)return;
        res.push_back(root->val);
        traversal(root->left,res);
        traversal(root->right,res);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        //迭代法
        vector<int> res;
        if(root==NULL)return res;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* tmp=s.top();
            s.pop();
            res.push_back(tmp->val);
            if(tmp->right!=NULL)s.push(tmp->right);
            if(tmp->left!=NULL)s.push(tmp->left);
        }
        return res;
    }
};
// @lc code=end

