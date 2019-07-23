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
const int N=1e5+10;
int xr,k,n,b;
void solve(){
sc(k);
xr=0;
loop(i,1,k){
 sc(b);sc(n);
 if(b%2){xr=xr^(n%2);continue;}
 int mod=n%(b+1);
 if(mod==b){xr=xr^2;continue;}
 xr=xr^(mod%2);
}
printf(xr?"1\n":"2\n");
}
int main(){
freopen("powers.in","r",stdin);
int t;
sc(t);
while(t--){
solve();
}

}
/**
2
5
1 1 1 1 1
5
2 2 2 2 2
**/
