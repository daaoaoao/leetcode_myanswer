/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int fast = 0,lower=0;
        while(fast<nums.size()){
            if(nums[fast]!=val){
                nums[lower++] = nums[fast];
            }
            fast++;
        }
        return lower++;
    }
};
// @lc code=end

