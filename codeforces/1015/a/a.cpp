#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
using namespace std;
const int N=2e5+10,oo=1e9+7,mod=1e9+7;
ll n,l,r,cur,ans,m;
vector<pair<ll,ll> > v;
vector<ll>res;
int main(){
scll(n);scll(m);
for(int i=0;i<n;i++){
    scll(l);scll(r);
    v.push_back({l,1});
    v.push_back({r+1,-1});
}
sort(v.begin(),v.end());
for(int i=0;i<v.size()-1;i++){
        cur+=v[i].S;
        if(cur==0){
               for(int j=v[i].F;j<v[i+1].F;j++){res.push_back(j);}
            }
}
for(ll i=1;i<v[0].F;i++){res.push_back(i);}
for(ll j=v[v.size()-1].F;j<=m;j++){res.push_back(j);}
cout<<res.size()<<endl;
for(auto x:res){
    if(x>m){return 0;}
        cout<<x<<" ";}
}
///
