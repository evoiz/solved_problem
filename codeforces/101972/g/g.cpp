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
const int N=1e5+10,M=1e4+10;
int mx[512][512][4],a[512][512],u_l=0,u_r=1,d_l=2,d_r=3,n,m,t;
vector<int> tmp;
void build(){
me(mx,0);
  for(int i=1;i<=n;i++){
     for(int j=1;j<=m;j++){
        mx[i][j][u_l]=max(mx[i-1][j][u_l],mx[i][j-1][u_l]);
        mx[i][j][u_l]=max(mx[i][j][u_l],a[i][j]);
     }
  }

  for(int i=n;i>=1;i--){
     for(int j=1;j<=m;j++){
        mx[i][j][d_l]=max(mx[i+1][j][d_l],mx[i][j-1][d_l]);
        mx[i][j][d_l]=max(mx[i][j][d_l],a[i][j]);
     }
  }

  for(int i=1;i<=n;i++){
     for(int j=m;j>=1;j--){
        mx[i][j][u_r]=max(mx[i-1][j][u_r],mx[i][j+1][u_r]);
        mx[i][j][u_r]=max(mx[i][j][u_r],a[i][j]);
     }
  }

  for(int i=n;i>=1;i--){
     for(int j=m;j>=1;j--){
        mx[i][j][d_r]=max(mx[i+1][j][d_r],mx[i][j+1][d_r]);
        mx[i][j][d_r]=max(mx[i][j][d_r],a[i][j]);
     }
  }


}
int quere(int x,int y){
  tmp.clear();
  tmp.pb(mx[x-1][y-1][u_l]);
  tmp.pb(mx[x+1][y-1][d_l]);
  tmp.pb(mx[x-1][y+1][u_r]);
  tmp.pb(mx[x+1][y+1][d_r]);
  sort(all(tmp));
  ///for(auto x:tmp){cerr<<x<<" ";}cerr<<endl;
  return (tmp[3]-tmp[0]);
}
int main(){
sc(t);
while(t--){
sc(n);sc(m);
  loop(i,1,n){
    loop(j,1,m){sc(a[i][j]);}
  }
  build();
  int ans=1e9+10;
  for(int i=2;i<n;i++){
    for(int j=2;j<m;j++){
      ans=min(ans,quere(i,j));
    }
  }
  printf("%d\n",ans);
}
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
