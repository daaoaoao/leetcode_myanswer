#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generatePermutations(vector<int>& nums, vector<vector<int>>& permutations, int index) {
    if (index == nums.size() - 1) {
        permutations.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        if (i != index && nums[i] == nums[index]) {
            continue;  // 剪枝，跳过重复元素
        }

        swap(nums[index], nums[i]);
        generatePermutations(nums, permutations, index + 1);
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> findPermutations(vector<int>& nums) {
    vector<vector<int>> permutations;
    sort(nums.begin(), nums.end());  // 需要对元素进行排序，以确保剪枝条件有效
    generatePermutations(nums, permutations, 0);
    return permutations;
}

int main() {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> permutations = findPermutations(nums);

    // 输出所有全排列
    for (const auto& permutation : permutations) {
        cout << "{ ";
        for (const auto& num : permutation) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
