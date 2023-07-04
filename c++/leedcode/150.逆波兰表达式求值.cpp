/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int sum=0;
        stack<int> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i] == "+"){
                int x,y;
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                st.push(x+y);
            }
            else if(tokens[i] == "-"){int x,y;
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                st.push(y-x);}
            else if(tokens[i] == "*"){int x,y;
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                st.push(y*x);}
            else if(tokens[i] == "/"){int x,y;
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                st.push(y/x);}
            else{
                string t=tokens[i];
                int a=stoi(t);
                st.push(a);
            }
           
        }
        return st.top();
    }
};
// @lc code=end

