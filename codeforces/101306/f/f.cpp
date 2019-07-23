#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=2e2+10;
ll t,n,m,x,mn,mx;
bool ok(ll mid){
return (x*(n-2*mid))>=0;
}
int main(){
scll(t);
while(t--){
scll(n);scll(m);scll(x);
if(m<(n/2ll)){mn=m;}
ll lo=0;ll hi=min(n,m);
while(lo<hi){
ll mid=1ll*(lo+hi+1)/2;
if(ok(mid)){lo=mid;continue;}
hi=mid-1;
}
printf("%lld %lld\n",lo,(n-lo)*lo*x);
}
}
