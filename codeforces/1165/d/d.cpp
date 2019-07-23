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
ll a[N],n;
bool ch(ll x){
ll ret=1;
  for(ll i=2;i*i<=x;i++){
   if (x%i==0){
            ll cnt=1;
            while(x%i==0){x/=i;cnt++;}
            ret*=cnt;
        }
    }
    if (x>1){ret*=2ll;}
    ret-=2;
   //cerr<<ret<<endl;
    return (n>=ret);
}
void solve(){
scll(n);
read_arr_ll(a,0,n);
ll mx=*max_element(a,a+n);
ll mn=*min_element(a,a+n);
ll ans=1ll*mx*mn;
loop(i,0,n-1){ if((ans%a[i])!=0){printf("-1\n");return ;} }
if(!ch(ans)){
printf("-1\n");return ;}
printf("%lld\n",ans);
}

int main(){
int t;
sc(t);
while(t--){
solve();
}
}

/**


**/