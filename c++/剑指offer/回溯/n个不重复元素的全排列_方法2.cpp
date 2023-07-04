#include<bits/stdc++.h>
using namespace std;

void generatePermutations(vector<int>& nums, vector<vector<int>>& permutations, int index){
    if(index == nums.size()-1){
        permutations.push_back(nums);
        return;
    }
    for(int i = index; i < nums.size(); i++){
        swap(nums[index], nums[i]);
        generatePermutations(nums, permutations, index + 1);
        swap(nums[index], nums[i]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> permutations;
    generatePermutations(nums, permutations, 0);
    return permutations;
}
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = permute(nums);
    for (auto i : res) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}