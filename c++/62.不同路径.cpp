/*
 * @lc app=leetcode.cn id=62 lang=cpp
 *
 * [62] 不同路径
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> ve(m+1,vector<int>(n+1));
        for(int i=1;i<=m;i++)
        ve[i][1]=1;
        for(int j=1;j<=n;j++)
        {
            ve[1][j]=1;
        }
        for(int i=2;i<=m;i++)
        for(int j=2;j<=n;j++)
        {
            ve[i][j]=ve[i-1][j]+ve[i][j-1];
        }
        return ve[m][n];
    }
};
// @lc code=end

