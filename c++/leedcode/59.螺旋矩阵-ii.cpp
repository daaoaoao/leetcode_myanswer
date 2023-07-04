/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        int startx=0,starty=0;//循环一个圈的起始位置
        int loop=n/2;//循环一个圈的次数
        //矩阵中间位置
        int mid=n/2;
        int kg=1;
        int offset=1;//循环一圈每一条边的遍历长度
        int i,j;
        while(loop--){
            //从左到右
            for(j=starty;j<starty+n-offset;j++)
                res[startx][j]=kg++;
            //从上到下
            for(i=startx;i<startx+n-offset;i++)
                res[i][j]=kg++;
            //从右到左
            for(;j>startx;j--)
                res[i][j]=kg++;
            //从下到上
            for(;i>starty;i--)
                res[i][j]=kg++;
            //下一圈的起始位置
            startx++;
            starty++;
            offset+=2;
        }
        if(n%2==1){
            res[mid][mid]=kg;
        }
        return res;
    }
};
// @lc code=end

