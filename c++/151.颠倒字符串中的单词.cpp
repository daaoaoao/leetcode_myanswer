/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 颠倒字符串中的单词
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int t=0;
        int len=s.length();
        vector<string> t2;
        while(t<len)
        {
            if(s[t]==' ')
            {
                t++;
            }
            else
            {
                int t3=t;
                while(t3<len&&s[t3]!=' ')
                {
                    t3++;
                }
                string temp=s.substr(t,t3-t);
                t2.push_back(temp);
                t=t3;
            }
        }
        string s2;
        for(int i=t2.size()-1;i>=0;i--)
        {
            if(i!=0)s2.append(t2[i]+" ");
            else s2.append(t2[i]);
        }
        return s2;
        }
        
    };
// @lc code=end

