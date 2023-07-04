/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int lens = max(a.size(), b.size());
        if(a.size() < lens){
            a.insert(a.begin(), lens - a.size(), '0');
        }
        if(b.size() < lens){
            b.insert(b.begin(), lens - b.size(), '0');
        }
        string res = "";
        int carry = 0;
        for (size_t i = 0; i < lens; i++)
        {
            int temp = a[lens - i - 1] - '0' + b[lens - i - 1] - '0' + carry;
            if(temp == 0){
                res.insert(res.begin(), '0');
                carry = 0;
            }
            else if(temp == 1){
                res.insert(res.begin(), '1');
                carry = 0;
            }
            else if(temp == 2){
                res.insert(res.begin(), '0');
                carry = 1;
            }
            else if(temp == 3){
                res.insert(res.begin(), '1');
                carry = 1;
            }
        }
        if(carry == 1){
            res.insert(res.begin(), '1');
        }
        return res;
    }
};
// @lc code=end

