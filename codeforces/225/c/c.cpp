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
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=1000+5;
char c[N][N];
int mem[N][N][4],ds[N],dt[N],dss=1,dtt=2,oo=1e9;
int n,m,x,y;
int dp(int ind,int last,int k){
if(ind==m){
  if(last>=x && last<=y){return 0;}
  return oo;
}
if(mem[ind][last][k]!=-1){return mem[ind][last][k];}
int ans=oo;
if(k==dss){
  if(last<y){ans=min(ans,dt[ind]+dp(ind+1,last+1,dss));}
  if(last>=x){
     ans=min(ans,ds[ind]+dp(ind+1,1,dtt));
  }
}
if(k==dtt){
  if(last<y){ans=min(ans,ds[ind]+dp(ind+1,last+1,dtt));}
  if(last>=x){
     ans=min(ans,dt[ind]+dp(ind+1,1,dss));
  }
}
return mem[ind][last][k]=ans;
}
int main(){
me(mem,-1);
  sc(n);sc(m);sc(x);sc(y);
  for(int i=0;i<n;i++){scanf("%s",c[i]);}
  for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){ds[i]+=(c[j][i]=='#');dt[i]+=(c[j][i]=='.');}
  }
  int ans=min(dp(0,0,dss),dp(0,0,dtt));
  printf("%d\n",ans);
return 0;
}
