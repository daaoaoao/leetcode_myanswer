#include<bits/stdc++.h>
using namespace std;

bool isValidPart(const string& s)
{
    if(s.size()>3||s.empty()||(s.size()>1&&s[0]=='0'))
        return false;
    return s[0]!='0'?stoi(s)<=255: s.size()==1;
}
void backTree(const string& data,string& ip,vector<string>&ans,int partCount,int index)
{
    if(partCount==4&&index==data.size())
    {
        ans.push_back(ip);
        return;
    }
    if(index==data.size()||partCount==4)
        return;
    for(int len=1;len<=3&&index+len<=data.size();len++)
    {
        string part=data.substr(index,len);
        if(isValidPart(part))
        {
            ip += part;
            if(partCount<3)
                ip += '.';
            backTree(data,ip,ans,partCount+1,index+len);
            ip.erase(ip.size()-len);
            if(partCount<3)
                ip.pop_back();
        }
    }
}