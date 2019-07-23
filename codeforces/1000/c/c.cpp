#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+9;
ll n,l,r,cur,ans;
vector<pair<ll,ll> > v;
map<ll , ll > res;
int main(){
scanf("%lld",&n);
for(int i=0;i<n;i++){
    scanf("%lld%lld",&l,&r);
    v.push_back({l,1});
    v.push_back({r+1,-1});
}
sort(v.begin(),v.end());
for(int i=0;i<v.size()-1;i++){
        cur+=v[i].S;
        res[cur]+=abs(v[i].F-v[i+1].F);
}
for(int i=1;i<=n;i++){printf("%lld ",res[i]);}
}
/**
3
0 3
1 3
3 8
ans+=len(3-0)

**/
