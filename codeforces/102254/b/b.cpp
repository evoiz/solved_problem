#include <bits/stdc++.h>
#define F first
#define S second
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
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=1e3+10;
char a[N],b[N];
int mem[N][N],n,m;
int dp(int i,int j){
   if(i==n || j==m){return 0;}
   int &ret=mem[i][j];
   if(ret!=-1){return ret;}
   if(a[i]==b[j]){ret=1+dp(i+1,j+1);}
   else{ret=max(dp(i+1,j),dp(i,j+1));}
   return ret;
}
int main(){
  scs(a);
  scs(b);
  n=strlen(a);
  m=strlen(b);
  me(mem,-1);
  printf("%d\n",dp(0,0));
}
