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
const int N=2e5+10;
string s;
/**
R 0
B 1
G 2
**/
char con[]={'R','G','B','K'};
int mem[N][5],n;
int dp(int ind,int last){
if(ind==n){return 0;}
int &ret=mem[ind][last];
if(ret!=-1){return ret;}
ret=1e9;
for(int i=0;i<3;i++){
  if(i==last){continue;}
  ret=min(ret,(s[ind]!=con[i])+dp(ind+1,i));
}
return ret;
}
void path(int ind,int last){
if(ind==n){return ;}
int ret=mem[ind][last];
for(int i=0;i<3;i++){
  if(i==last){continue;}
  if(ret==(s[ind]!=con[i])+dp(ind+1,i)){
    printf("%c",con[i]);
    path(ind+1,i);
    return ;
  }
}
return ;
}
int main(){
cin>>n>>s;
me(mem,-1);
cout<<dp(0,3)<<endl;
path(0,3);
}
