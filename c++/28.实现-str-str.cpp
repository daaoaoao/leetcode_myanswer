/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //获取next数组
    void getNext(int* next,const string& s)
    {
        int j=-1;
        next[0]=j;
        for(int i=1;i<s.size();i++)
        {
            //当前前后缀不同
            while(j>=0&&s[i]!=s[j+1])
            {
                j=next[j];//向前会退
            }
            if(s[i]==s[j+1])
            {
                j++;
            }
            next[i]=j;
        }
    }
    int strStr(string haystack, string needle) {
        if(needle.size()==0)return 0;
        int next[needle.size()];
        getNext(next,needle);
        int j=-1;
        for(int i =0 ;i<haystack.size();i++)
        {
            //当不匹配
            while(j>=0&&haystack[i]!=needle[j+1])
            {
                j=next[j];//向前会退
            }
            //当匹配j移动，i移动
            if(haystack[i]==needle[j+1])
            {
                j++;
            }
            if(j==needle.size()-1)
            {
                return i-j;
            }
        }
        return -1;
    }
};
// @lc code=end

