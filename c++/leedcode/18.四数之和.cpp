/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int l=nums.size();
        if(l<4) return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<l;i++)
        {
            //判断a去重
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<l;j++)
            {
                //判断b去重，因为比较当前值与前一个值的是否一样
                if(j>i+1&&nums[j]==nums[j-1])continue;
                int left=j+1,right=l-1;
                while(left<right)
                {
                    if(nums[i]+nums[j]>target-nums[left]-nums[right]){
                        right--;
                        //大于结果,right偏大，缩小并去重，当前与之前比较
                        while(right>left&&nums[right]==nums[right+1])right--;
                    }
                    else if(nums[i]+nums[j]<target-(nums[left]+nums[right]))
                    {
                        left++;
                        //小于结果,left偏小，缩小并去重，当前与之前比较
                        while(left<right&&nums[left]==nums[left-1])left++;
                    }
                    else
                    {
                        res.push_back({nums[i],nums[j],nums[left],nums[right]});
                        //找到结果，去重
                        while(right>left&&nums[right]==nums[right-1])right--;
                        while(left<right&&nums[left]==nums[left+1])left++;
                        //去重结束，从最后满足条件位置开始下一个值
                        right--;
                        left++;
                    }
                }
            }
        }
        return res;
    }
};
// @lc code=end

