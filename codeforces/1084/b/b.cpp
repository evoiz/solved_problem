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
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e3+10;
ll a[N],s,n,sum,l=0,h,mx=2e9;
bool ok(ll mid){
ll ts=s;
loop(0,n-1,1){ts-=max(0ll,a[i]-mid);if(ts<=0){return 1;}}
return ts<=0;
}

int main(){
scll(n);scll(s);
read_arr(a,0,n);
loop(0,n-1,1){sum+=a[i];mx=min(mx,a[i]);}
if(sum<s){printf("-1\n");return 0;}
h=mx;
while(l<h){
ll mid=1ll*(l+h+1)/2ll;
if(ok(mid)){l=mid;}
else{h=mid-1;}
}
printf("%lld\n",h);
}
/**
100
2 1 2
**/
