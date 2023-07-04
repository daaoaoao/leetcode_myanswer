/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    void traversal(TreeNode* cur,vector<int>& path,vector<string>&res)
    {
        path.push_back(cur->val);
        //叶子节点
        if(cur->left==NULL&&cur->right==NULL)
        {
            string sPath;
            for(int i=0;i<path.size()-1;i++)
            {
                sPath+=to_string(path[i]);
                sPath+="->";
            }
            sPath+=to_string(path[path.size()-1]);
            res.push_back(sPath);
            return;
        }
        if(cur->left){
            traversal(cur->left,path,res);
            path.pop_back();//回溯
        }
        if(cur->right)
        {
            traversal(cur->right,path,res);
            path.pop_back();//回溯;
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root==NULL)
            return res;
        vector<int> path;
        traversal(root,path,res);
        return res;
    }
};
// @lc code=end

