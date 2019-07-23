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
const int N=50+6,oo=1e9+10;
int a[N][N],sum[N][N],n,m,ans=oo,dx,dy;
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
int main(){
sc(n);sc(m);
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){sc(a[i][j]);}
}
sc(dx);sc(dy);
build();
for(int i=1;i<=n-dx+1;i++){
   for(int j=1;j<=m-dy+1;j++){
     int tmp=query(i,j,i+dx-1,j+dy-1);
     ans=min(ans,tmp);
  }
}
for(int i=1;i<=n-dy+1;i++){
   for(int j=1;j<=m-dx+1;j++){
     int tmp=query(i,j,i+dy-1,j+dx-1);
     ans=min(ans,tmp);
  }
}
printf("%d\n",ans);
}
/**

16 %15=15
16 %1=0
**/
