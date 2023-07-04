/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int last=nums.size()-1;
        int first=0;
        vector<int> res(nums.size());
        int k=last;
        while(first<=last){
            if(nums[first]*nums[first]>nums[last]*nums[last]){
                res[k--] = nums[first]*nums[first];
                first++;
            }
            else{
                res[k--] = nums[last]*nums[last];
                last--;
            }
        }
        return res;
        }
};
// @lc code=end

