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
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=100+6,oo=1e9+10;
ll tt,n,sum;
ll sum_of_of_n_level(ll n){
ll a= (n * (n + 1) * (n + 2)) / 6;
n--;
ll b= (n * (n + 1) * (n + 2)) / 6;
return 1ll*(a+b);
}
bool ok(ll x){
ll a=sum_of_of_n_level(x);
return a<=n;
}
bool ok2(ll mid,ll x){
ll ans=0ll;
ans=(mid*(mid+1ll)/2);
if(mid>x){
ll all=((x-1)-(x-1-(mid-x+1))+1)*((x-1)+(x-1-(mid-x+1)))/2;
ans+=all;
}
return ans<=sum;
}
ll solve(ll n,ll x){
 ll l = 0, r = 2*x+1, mid ,s;
    while(l<=r){
        mid = (l+r)>>1;
        if(mid<=x)
            s = 1ll*mid*(mid+1)/2;
        else
            s = 1ll*x*x -  1LL*(2*x-1-mid)*(2*x-mid)/2;

        if( s>=n)
            r = mid-1;
        else
            l = mid+1;
    }
    return l;
}
int main(){
 freopen("army.in", "r", stdin);
scll(tt);
for(ll t=1;t<=tt;t++){
    scll(n);
   ll l=1ll,h=1ll*2e6,mid;
   while(l<=h){
      mid=(l+h)/2;
      if(ok(mid)){l=mid+1;}
      else{h=mid-1;}
   }
   n-=sum_of_of_n_level(h);
   ll ans=h*h+solve(n,h+1);
   printf("Case %d: ",t);
   printf("%lld\n",ans);
}
}
/**
4 3 2 1
**/
