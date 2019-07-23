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
int n,k,a[N];
map<char,int> mp;
int main(){
cin>>n>>k>>s;
for(int i=0;i<n;i++){mp[s[i]]++;a[i]=mp[s[i]];}
for(auto x:mp){
if(k<=0){mp[x.F]=0;continue;}
int tmp=min(k,x.S);
mp[x.F]=tmp;
k-=tmp;
}
for(int i=0;i<n;i++){if(a[i]<=mp[s[i]])continue;cout<<s[i];}
}
