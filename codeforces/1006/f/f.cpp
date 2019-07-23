#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
map<pair<ll,ll>,ll> mp;
ll m,n,k,a[30][30];
bool in(ll x,ll y){
if(x<0 ||  x>=n){return 0;}
if(y<0 || y>=m){return 0;}
return 1;
}
void btc(ll i,ll j,ll mask){
if(!(in(i,j))){return ;}
if(i+j==m-1){mp[{i,mask^a[i][j]}]++;return ;}
btc(i+1,j,mask^a[i][j]);
btc(i,j+1,mask^a[i][j]);
return ;
}
ll ans(ll i,ll j,ll mask){
if(!(in(i,j))){return 0;}
if(i+j==m-1){return mp[{i,mask^k}];}
return ans(i-1,j,mask^a[i][j])+ans(i,j-1,mask^a[i][j]);
}
int main(){
cin>>n>>m>>k;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];}}
btc(0,0,0);
cout<<ans(n-1,m-1,0)<<endl;
}
