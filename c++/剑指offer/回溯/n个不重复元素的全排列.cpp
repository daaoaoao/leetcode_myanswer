#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        vector<bool> used(nums.size(), false);
        dfs(nums, res, tmp, used);
        return res;
    }
    void dfs(vector<int>& nums, vector<vector<int>>& res, vector<int>& tmp, vector<bool>& used) {
        if (tmp.size() == nums.size()) {
            res.push_back(tmp);
            return;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (used[i]) continue;
            tmp.push_back(nums[i]);
            used[i] = true;
            dfs(nums, res, tmp, used);
            tmp.pop_back();
            used[i] = false;
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = s.permute(nums);
    for (auto i : res) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}