#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
#define ll long long
#define ull unsigned long long
#define INF 0x7f7f7f7f
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
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=2e5+10;
ll a[N],b[N],n,ans,tmp;
map<ll,ll> mp;
set<ll> st;
int main(){
scll(n);
read_arr_ll(a,1,n);
loop(i,1,n){mp[a[i]]++;}
loop(i,1,n){
tmp=0;
loop(j,a[i],a[i]+5){
  if(mp.find(j)!=mp.end()){
  tmp+=mp[j];
  }
}
tmp=0;
loop(j,a[i]-5,a[i]){
  if(mp.find(j)!=mp.end()){
  tmp+=mp[j];
  }
}
ans=max(ans,tmp);
}
printf("%lld\n",ans);
}
/**
6
1 10 17 12 15 2

**/