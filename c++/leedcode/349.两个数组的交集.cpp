/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(find(s1.begin(),s1.end(),nums2[i])!=s1.end())
                ans.insert(nums2[i]);
        }
        vector<int> re;
        for(auto its=ans.begin();its!=ans.end();its++){
            re.push_back(*its);
        }
    }
};
// @lc code=end

