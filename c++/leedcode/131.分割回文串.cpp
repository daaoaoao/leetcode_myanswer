#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<vector<string>> ans;
vector<string> tmp;
//判断是否为回文串
bool isPalindrome(string s)
{
    int i=0,j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
void dfs(string& s,int index)
{
    if(index>=s.size())
    {
        ans.push_back(tmp);
        return;
    }
    for(int i=index;i<s.size();i++)
    {
        //判断是否为回文是加入tmp
        if(isPalindrome(s.substr(index,i-index+1)))
        {
            string str=s.substr(index,i-index+1);
            tmp.push_back(str);
        }
        else
            continue;
        dfs(s,i+1);//继续寻找i+1为起始位置的回文串
        tmp.pop_back();//弹出本次回文串
    }
}
    vector<vector<string>> partition(string s) {
        dfs(s,0);
        return ans;
    }
};