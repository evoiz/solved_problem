#include <bits/stdc++.h>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=2e3+7,oo=1e9+7;
long long n,t,ans,odd,even,tmp;
string s,ss;
map<char,int>mp;
set<string>st;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
cin>>t;
while(t--){
cin>>n>>s;
mp.clear();
ss.clear();
st.clear();
ans=0;odd=0;even=0;
for(auto x:s){mp[x]++;}
for(auto x:mp){even+=x.S/2;odd+=x.S%2;for(int i=0;i<x.S/2;i++)ss+=x.F;}
if((n%2==0 && !odd) ||(odd==1 && n%2)){
while(next_permutation(ss.begin(),ss.begin()+ss.length())){ans++;}
ans++;
}
cout<<ans<<endl;
}
return 0;
}
/**
3
5
2 -1 -1 9 15
3
3 3 -1
7
15 10 -1 1 2 3 4

**/
