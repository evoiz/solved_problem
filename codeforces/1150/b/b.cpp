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
int dx[]={0,1,-1,0,0},
    dy[]={0,0,0,1,-1},n;
char g[55][55],s[55];
bool in(int x,int y){
if(x<0 || x>=n){return 0;}
if(y<0 || y>=n){return 0;}
if(g[x][y]=='#'){return 0;}
return 1;
}
void is_center(int x,int y){
loop(i,0,4){
  if(!in(x+dx[i],y+dy[i])){return ;}
}
loop(i,0,4){
  g[x+dx[i]][y+dy[i]]='#';
}
return ;
}
int main(){
sc(n);
loop(i,0,n-1){
 scs(s);
 loop(j,0,n-1){g[i][j]=s[j];}
}
loop(i,0,n-1){
  loop(j,0,n-1){
    is_center(i,j);
  }
}
loop(i,0,n-1){
  loop(j,0,n-1){
    if(g[i][j]=='.'){printf("NO\n");return 0;}
  }

}

printf("YES\n");
}
