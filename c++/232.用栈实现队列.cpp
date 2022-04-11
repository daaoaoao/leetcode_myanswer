/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class MyQueue {
public:
    stack<int> stin;
    stack<int> stout;
    MyQueue() {

    }
    
    void push(int x) {
        stin.push(x);
    }
    
    int pop() {
        if(stout.empty())
        {
            while(!stin.empty())
            {
                stout.push(stin.top());
                stin.pop();
            }
        }
        int res=stout.top();
        stout.pop();
        return res;
    }
    
    int peek() {
        int res=this->pop();
        stout.push(res);
        return res;
    }
    
    bool empty() {
        return stin.empty()&&stout.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

