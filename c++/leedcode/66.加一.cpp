/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int lens = digits.size();
        for (size_t i = 0; i < lens; i++)
        {
            if (digits[lens - i - 1] == 9)
            {
                if(i == lens - 1){
                    digits[lens - i - 1] = 0;
                    digits.insert(digits.begin(), 1);
                }
                else
                {
                    digits[lens - i - 1] = 0;
                }
            }
            else
            {
                digits[lens - i - 1] += 1;
                return digits;
            }
        }
        return digits;
    }
};
// @lc code=end

