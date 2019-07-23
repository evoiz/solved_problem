
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
const int N=100+10;
int g[N][N],a[N],n,m,k,t;
int best(){
int ret=0;
int j=0;
for(int i=1;i<=m;i++){
  while( j<=m && a[j]-a[i-1]<=k){
    ret=max(ret,j-i+1);
   j++;
  }
}
return ret;
}
void solve(){
me(g,0);
sc(n);sc(m);sc(k);
int ans=0;
loop(i,1,n){
  loop(j,1,m){sc(g[i][j]);}
}
loop(i,1,m){
  loop(j,1,n){
    g[j][i]+=g[j-1][i];
  }
}
 loop(i,1,n){
   loop(j,i,n){
     loop(z,1,m){
       a[z]=g[j][z]-g[i-1][z];
       a[z]+=a[z-1];
     }
     ans=max(ans,int (best()*(j-i+1)) );
   }
 }
printf("%d\n",ans);
}

int main(){
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
