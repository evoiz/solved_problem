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
const int N=3e5+10,M=1e4+10;
ll xr,tmp,n;
map<ll,ll> mp[2];
ll ans;
int main(){
scll(n);
mp[0][0]++;
loop(i,1,n){
scll(tmp);
xr=tmp^xr;
ans+=1ll*mp[i&1][xr];
mp[i&1][xr]++;
}
printf("%lld\n",ans);
}


/**
2
4 4
22 7 3 11
3 1 8 9
5 2 4 3
13 5 6 9
3 4
1 2 3 4
5 6 7 8
9 10 11 12

**/
