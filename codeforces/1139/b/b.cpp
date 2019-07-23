#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
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
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);using namespace std;
using namespace std;
const int N=2e5+10;
ll n,a[N],ans,last;
int main(){
scll(n);
read_arr_ll(a,0,n);
reverse(allr(a,n));
ans=a[0];
last=ans;
loop(i,1,n-1){
ans+=min(last-1,a[i]);
last=min(last-1,a[i]);
if(last==0){break;}
}
printf("%lld\n",ans);
}
/**
1
4
1 1 3 4

1 3
2 4
3 2
4 2
5 3
6
**/
