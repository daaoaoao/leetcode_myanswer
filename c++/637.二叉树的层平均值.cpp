/*
 * @lc app=leetcode.cn id=637 lang=cpp
 *
 * [637] 二叉树的层平均值
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
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
            double a=accumulate(temp.begin(),temp.end(),0.0)/temp.size();
            ans.push_back(a);
        }
        return ans;
    }    
};
// @lc code=end

