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
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
#define INF 0x7f7f7f7f
using namespace std;
const int N =1e5+10;
int n,x,tmp;
map<ll,ll> fr;
ll ans;
int main(){
sc(n);sc(x);
loop(i,0,n-1){
sc(tmp);
ans+=1ll*fr[(tmp^x)];
fr[tmp]++;
}
printf("%lld\n",ans);
return 0;
}
