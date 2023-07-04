/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                if(res[0] == -1&&res[1]==-1) {res[0] = i;res[1]=i;}
                else
                    res[1] = i;
            }
        }
        return res;
    }
};
// @lc code=end

