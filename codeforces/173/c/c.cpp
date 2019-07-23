#include <iostream>
#include <stdio.h>
#include  <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
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
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=500+10;
ll a[N][N],sum[N][N],n,m,oo=1e9;
ll query(int x1,int y1,int x2,int y2){
ll ans=sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1];
return 1ll*ans;
}
void build(){
for(int i=1;i<=n;i++){
   for(int j=1;j<=m;j++)
   sum[i][j]=a[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
  }
}
int main (){
scll(n);scll(m);
loop(i,1,n){
  loop(j,1,m){scll(a[i][j]);}
}
build();
ll ans=-oo;
loop(i,1,n){
  loop(j,1,m){
    ll cur=a[i][j];
    ll lim=min( min(i-1,n-i) , min(j-1,m-j));
    for(ll d=1;d<=lim;d++){
      cur=query(i-d,j-d,i+d,j+d)-cur-a[i-d+1][j-d];
	  ans=max(ans,cur);
    }
  }
}
printf("%lld\n",ans);
}
