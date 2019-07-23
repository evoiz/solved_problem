
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
const int N=128,mod=1e9+7;
int mem[N][N],n,t;
int dp(int pos,int xr){
if(pos==0){return (xr!=0);}
int &ret=mem[pos][xr];
if(ret!=-1){return ret;}
ret=0;
for(int i=1;i<=pos;i++){
 ret+=dp(pos-i,xr^(i));
 ret%=mod;
}
return ret;
}
void solve(){
sc(n);
printf("%d\n",dp(n,0));
}

int main(){
me(mem,-1);
sc(t);
while(t--){
solve();
}
return 0;
}
/**
3
3 3 2
1 0 1
0 0 0
1 0 0
4 4 2
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
5 5 5
1 0 1 0 1
0 1 0 1 0
0 0 0 0 0
0 1 0 0 0
1 0 1 1 1
**/
