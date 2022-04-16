/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(auto i:nums)
        {
            if(m.find(i)==m.end())
            {
                m[i]=1;
            }
            else
            {
                m[i]++;
            }
        }
        vector<pair<int,int>> v;
        for(auto i:m)
        {
            v.push_back(make_pair(i.first,i.second));
        }
        sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){return a.second>b.second;});
        vector<int> res;
        auto its=v.begin();
        for(int i=0;i<k;i++,its++)
        {
            res.push_back(its->first);
        }
        return res;
    }
};
// @lc code=end

