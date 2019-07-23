#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const ll N=1e5+10; ll oo=1e10+10;
pair<ll,pair<ll,ll> > p[N];
ll n,k,ans[N];
priority_queue<ll> q;
int main(){
scanf("%lld%lld",&n,&k);
for(int i=0;i<n;i++){scanf("%lld",&p[i].F);p[i].S.S=i;}
for(int i=0;i<n;i++){scanf("%lld",&p[i].S.F);}
sort(p,p+n);
ll sum=0;
for(int i=0;i<n;i++){
if(q.size()>k){sum-=-q.top();q.pop();}
ans[p[i].S.S]=sum+p[i].S.F;
sum+=p[i].S.F;
q.push(-p[i].S.F);
}
for(int i=0;i<n;i++){printf("%lld ",ans[i]);}
}
