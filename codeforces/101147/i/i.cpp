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
map<double,pair<ll,ll> > mp;
ll n,R;
void update(double l,double r,ll x){
 ///cerr<<l<<" "<<r<<" "<<x<<endl;
 if(mp.find(l)==mp.end()){mp[l]={0,0};}
 if(mp.find(r)==mp.end()){mp[r]={0,0};}
 mp[l].F+=x;
 mp[r].S-=x;
}
void solve(){
mp.clear();
scll(n);scll(R);
loop(i,1,n){
  ll x,y,r;
  scll(x);scll(y);scll(r);
  if(r+abs(y)>R){continue;}
  if(r>R){continue;}

  double xx=1.0*(R-r);
         xx=xx*xx;
  double yy=y*y;
  double mx=sqrt(xx-yy);
  update(1.0*x-mx,1.0*x+mx,r);
}
ll best=0,cnt=0;
for(auto x:mp){
 cnt+=x.S.F;
 best=max(best,cnt);
 cnt+=x.S.S;
}
printf("%lld\n",best);
}
int main(){
freopen("walk.in","r",stdin);
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
