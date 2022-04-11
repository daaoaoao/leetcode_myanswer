/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int l=nums.size();
        sort(nums.begin(),nums.end());
        //第一个指针定下来
        for(int i=0;i<l;i++)
        {
              if (nums[i] > 0) {
                return result;
            }
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            //两个
            int left=i+1;
            int right=l-1;
            while(left<right)
            {
                if (nums[i] + nums[left] + nums[right] > 0) 
                {
                    right--;
                    // 当前元素不合适了，可以去重
                    while (left < right && nums[right] == nums[right + 1]) right--;
                } 
                else if (nums[i] + nums[left] + nums[right] < 0) 
                {
                    left++;
                    // 不合适，去重
                    while (left < right && nums[left] == nums[left - 1]) left++;
                } 
                else 
                {
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    // 去重逻辑应该放在找到一个三元组之后
                    while (right > left && nums[right] == nums[right - 1]) right--;
                    while (right > left && nums[left] == nums[left + 1]) left++;
                    // 找到答案时，双指针同时收缩
                    right--;
                    left++;
                }

            }
        }
        return result;
    }
};
// @lc code=end

