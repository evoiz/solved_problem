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
const int N=2e5+10;
int a[N],n,last_i=-1,last_di=N;
vector<int> ret;
int main(){
sc(n);
read_arr(a,0,n);
loop(i,0,n-2){
  if(a[i] > last_i && a[i] < last_di){
    if(a[i+1]>a[i]){
      ret.pb(0);
      last_i=a[i];
      continue;
    }
    else{
      ret.pb(1);
      last_di=a[i];
      continue;
    }
  }
  if(a[i]>last_i ){
    ret.pb(0);
    last_i=a[i];
    continue;
  }
  if(a[i]<last_di){
    ret.pb(1);
    last_di=a[i];
    continue;
  }
  else{
    printf("No\n");
    return 0;
  }

}
if(!(a[n-1]>last_i || a[n-1]<last_di)){printf("No\n");return 0;}
if(a[n-1]>last_i){ret.pb(0);}
else if(a[n-1]<last_di){ret.pb(1);}
printf("YES\n");
for(auto x:ret){printf("%d ",x);}

}
