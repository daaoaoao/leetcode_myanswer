#include<bits/stdc++.h>
using namespace std;

void generatePermutations(vector<int>& nums,vector<vector<int>>& permutations,vector<int>& used,vector<int>& current){
    if(current.size() == nums.size()){
        permutations.push_back(current);
        return;
    }
    for(int i=0;i<nums.size();i++)
    {
        //剪枝
        if(used[i]||(i>0&&nums[i]==nums[i-1]&&!used[i-1]))
            continue;
        current.push_back(nums[i]);
        used[i]=1;
        generatePermutations(nums,permutations,used,current);
        current.pop_back();
        used[i]=0;
    }
}
vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> permutations;
    vector<int> used(nums.size(),0);
    vector<int> current;
    sort(nums.begin(),nums.end());
    generatePermutations(nums,permutations,used,current);
    return permutations;
}