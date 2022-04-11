/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> ve(m,vector<int>(n,0));
        for(int i=0;i<m && obstacleGrid[i][0] == 0;i++)
        {
             ve[i][0]=1;
        }
        for(int j=0;j<n && obstacleGrid[0][j] == 0;j++)
        {
             ve[0][j]=1;
        }
        for(int i=1;i<m;i++)
        for(int j=1;j<n;j++)
        {
            if(obstacleGrid[i][j]==1)ve[i][j]=0;
            else ve[i][j]=ve[i-1][j]+ve[i][j-1];
        }
        return ve[m-1][n-1];
    }
};
// @lc code=end

