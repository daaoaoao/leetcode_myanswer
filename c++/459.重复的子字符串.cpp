/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void getNext(int* next,const string s)
    {
        int j=0;
        next[0]=j;
        for(int i=1;i<s.size();i++)
        {
            while(j>0&&s[i]!=s[j])
            {
                j=next[j-1];
            }
            if(s[i]==s[j])j++;
            next[i]=j;
        }
    }
    bool repeatedSubstringPattern(string s) {
        
        int len=s.size();
        int next[len];
        getNext(next,s);
        if(next[len-1]!=0&&len % (len-next[len-1])==0)
        return true;
        return false;
    }
};
// @lc code=end

