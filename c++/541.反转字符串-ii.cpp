/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        int len = s.length();
        if(len <=k)
        {
            reverse(s.begin(),s.end());
            return s;
        }
        else
        {
            for(int i=0;i<len;i+=2*k){
                if(i+k<=len)
                {
                    reverse(s.begin()+i,s.begin()+i+k);
                }
                else
                {
                    reverse(s.begin()+i,s.end());
                }
            }
            return s;
        }
    }
};
// @lc code=end

