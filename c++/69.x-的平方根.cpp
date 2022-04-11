/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int low=1,high=x/2;
        if(x==1) return 1;
        while(low<=high){
            int mid=(low+high)/2;
            if(x/mid>=mid)
                low=mid+1;
            else
                high=mid-1;
        }
        return high;
    }
};
// @lc code=end

