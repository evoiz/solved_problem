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
const int N=2e2+10;
ll n,tmp[N],a[N],p[N],mem[N][N];
ll oo=1e9;
ll dp(int ind,int dif){
if(ind==n+1){return (dif==0?0:-oo);}
ll &ret=mem[ind][dif+100];
if(ret!=-1){return ret;}
ret=-oo;
ret=max(ret,-a[ind]+dp(ind+1,dif+1));
if(dif>=0)ret=max(ret,a[ind]+dp(ind+1,dif-1));
return ret;
}
int main(){
scll(n);
loop(i,1,n){scll(tmp[i]);}
loop(i,1,n){scll(p[i]);a[i]=tmp[p[i]];}
err_arr(a,1,n);
me(mem,-1);
printf("%lld\n",dp(1,0));
}
