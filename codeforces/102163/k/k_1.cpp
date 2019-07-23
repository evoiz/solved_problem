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
ll n,a[N],pr[N],x;
void solve(){
scll(n);scll(x);
read_arr_ll(a,1,n);
loop(i,1,n){pr[i]=1ll*a[i]+pr[i-1];}
ll ans=0;
loop(i,1,n){
   ll l=0,h=n-i+1;
   ll mid;
   //cerr<<i<<": "<<l<<" "<<h<<"\t";
   while(l<h){
     mid=(l+h+1)/2;
     if((pr[i+mid-1]-pr[i-1])<x){l=mid;}
     else{h=mid-1;}
   }
  // cerr<<l<<endl;
   ans+=l;
}
printf("%lld\n",ans);
}


int t;
int main(){
sc(t);
while(t--){
solve();
}

}
