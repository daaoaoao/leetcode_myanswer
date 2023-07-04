/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int lens = strs.size();
        if(lens == 0) return "";
        string ans = strs[0];
        for(int i = 1; i < lens; i++){
            int j = 0;
            for(; j < ans.size() && j < strs[i].size(); j++){
                if(ans[j] != strs[i][j]) break;
            }
            ans = ans.substr(0, j);
            if(ans == "") return ans;
        }
        return ans;
    }
};
// @lc code=end

