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
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ii pair < int , int >
#define LS pair < ll , string >
using namespace std;
const int N=2e2+10;
ll oo=1e11;
ll mem[N][N][N],a[N],n,k,x;
ll dp(int ind,int xx,int kk){
if(ind==n){return ((xx==x && kk<k)?0:-oo);}
if(kk>=k){return -oo;}
if(xx>x){return -oo;}
ll &ret=mem[ind][xx][kk];
if(ret!=-1){return ret;}
ret=-oo;
ret=max(ret,a[ind]+dp(ind+1,xx+1,0));
ret=max(ret,dp(ind+1,xx,kk+1));
return ret;
}
int main(){
me(mem,-1);
scll(n);scll(k);scll(x);
read_arr_ll(a,0,n);
ll ans=(dp(0,0,0)>0?dp(0,0,0):-1);
printf("%lld\n",ans);
}
