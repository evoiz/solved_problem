#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(ll i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(ll i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(ll i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e3+10;
ll a[N],n,k;
vector<ll> tmp;
bool ok(int mid){
tmp.clear();
for(int i=0;i<mid;i++){tmp.pb(a[i]);}
sort(all(tmp),greater<ll> ());
ll len=0;
for(int i=0;i<tmp.size();i+=2){
 len+=tmp[i];
}
return (len<=k);
}
int main(){
scll(n);scll(k);
read_arr_ll(a,0,n);
int l=0,h=n,mid;
while(l<h){
mid=(l+h+1) >> 1;
if(ok(mid)){l= mid;}
else {h= mid-1;}
}
cout<<l<<endl;
}
/**

**/