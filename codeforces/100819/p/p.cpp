#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
vector<int> v;
string s;
int ans;
int main(){
    cin>>s;
    for(auto x:s){mp[x]++;}
    for(auto x:mp){v.push_back(x.second);}
    sort(v.begin(),v.end());
    if(v.size()<=2){cout<<0<<endl;return 0;}
    ans=s.length()-v[v.size()-1]-v[v.size()-2];
    cout<<ans<<endl;
}
/**
4 3
2 BROKEN
2 BROKEN
1 SAFE
3 BROKEN

**/
