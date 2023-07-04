/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lens = nums.size();
        if(lens == 0) return 0;
        int i = 0;
        int j = 0;
        for(; j < lens; j++){
            if(nums[i] != nums[j]){
                nums[++i] = nums[j];
            }
        }
        return i + 1;     
    }
};
// @lc code=end

