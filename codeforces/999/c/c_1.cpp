#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=4e5+10;
string s;
int n,k;
map<char,vector<int>> mp;
char ans[N];
int main(){
cin>>n>>k>>s;
for(int i=0;i<n;i++){mp[s[i]].push_back(i);}
for(char c='a';c<='z' && k>0;c++){
        reverse(mp[c].begin(),mp[c].end());
        if(k>=mp[c].size()){k-=mp[c].size();mp[c].clear();continue;}
        else{while(k>0){k--;mp[c].pop_back();}}
     }

for(auto x:mp){
    for(auto c:x.S){ans[c]=1;}
}
for(int i=0;i<n;i++){if(ans[i]!=0)cout<<s[i];}
}
