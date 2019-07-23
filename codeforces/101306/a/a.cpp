#include <bits/stdc++.h>
using namespace std;
int n,mx;
string s;
map<char,int>mp;
vector<pair<char,int>>ans;
int main(){
cin>>n>>s;
for(int i=0;i<s.length();i++){mp[s[i]]++;}
for(auto x:mp){
    mx=max(mx,x.second);
}
for(auto x:mp){
if(x.second==mx){ans.push_back({x.first,x.second});}
}
cout<<ans.size()<<endl;
for(auto x:ans){
    for(int i=0;i<x.second;i++){cout<<x.first;}
    cout<<endl;
}
return 0;
}
/**
**/
