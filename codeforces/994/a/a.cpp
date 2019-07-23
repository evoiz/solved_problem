#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=4e5+10,oo=1e9+10;
int n,m,a[N],tmp;
map<int ,int> mp;
int main(){
cin>>n>>m;
for(int i=0;i<n;i++){cin>>a[i];}
for(int i=0;i<m;i++){cin>>tmp;mp[tmp]=1;}
for(int i=0;i<n;i++){if(mp[a[i]]==1){cout<<a[i]<<" ";mp[a[i]]--;}}
}