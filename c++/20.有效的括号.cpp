/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        //存入与当前 ([{匹配的值
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            //判断三种情况
            if(s[i]=='(')st.push(')');
            else if(s[i]=='[')st.push(']');
            else if(s[i]=='{')st.push('}');
            //判断st为空说明不存在右匹配，与栈顶不相等也说明不匹配
            else if(st.empty()||st.top()!=s[i])return false;
            else
            //匹配则弹出
            st.pop();
        }
        return st.empty();
    }
};
// @lc code=end

