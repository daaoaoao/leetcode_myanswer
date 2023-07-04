/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> every_one(int n)
    {
        vector<int> ve;
        while(n){
            ve.push_back(n%10);
            n/=10;
        }
        reverse(ve.begin(),ve.end());
        return ve;
    }
    int getSum(int a)
    {
        vector<int> n=every_one(a);
        int sum=0;
        for(auto &s:n){
            s*=s;
            sum+=s;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> se;
        while(!(n==1)){
            int sum=getSum(n);
            n=sum;
            if(find(se.begin(),se.end(),sum)==se.end()){
                se.insert(sum);
            }
            else
            {
                return false;
            }
            
        }
        return true;
    }
}; 
// @lc code=end

