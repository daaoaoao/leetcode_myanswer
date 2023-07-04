#include<bits/stdc++.h>
using namespace std;

void backTree(string temp,vector<string>& ans,int leftNum,int rightNum)
{
   if(leftNum==0&&rightNum==0)
   {
       ans.push_back(temp);
       return;
   }
    if(leftNum>0)
    {
         backTree(temp+'(',ans,leftNum-1,rightNum);
    }
    if(rightNum>0&&leftNum<rightNum)
    {
        backTree(temp+')',ans,leftNum,rightNum-1);
    }
}
vector<string> generateParenthesis(int n) {
    vector<string> ans;
    backTree("",ans,n,n);
    return ans;
}
int main()
{
    int n=2;
    vector<string> ans=generateParenthesis(n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}