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
#define me(a,b) memset(a,b,sizeof a)
using namespace std;
const int N=(2e5)+10;
const ll mod=1000000007ll;
pair<ll,ll> p[N];
ll n,ans=-1;
bool ok(ll x){
for(int i=1;i<n;i++){
if( p[i].F%x && p[i].S%x){return 0;}
}
return 1;
}
void solve(ll x){
if(ans!=-1){return ;}
for(ll i=2;i*i<=x && ans==-1;i++){
    if(x%i==0){
        if(ok(i)){ans=max(i,ans);}
        while(x%i==0){x/=i;}
    }
}
if(x<=1){return ;}
if(ok(x)){ans=max(ans,x);}
}
int main(){
scll(n);
for(int i=0;i<n;i++){scll(p[i].F);scll(p[i].S);}
solve(p[0].F);solve(p[0].S);
printf("%lld\n",ans);
return 0;
}/*
**/
