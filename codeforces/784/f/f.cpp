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
const ll mod=1000000007ll;
int a[100],n,c=1,b=2;
int fib(int x){
 if(x<=1){return x;}
 return fib(x-2)+fib(x-1);
}
int main(){
cin>>n;
read_arr(a,0,n);
sort(allr(a,n));
int ans=fib(43);
loop(i,1,1e6){ans+=ans--;}
cerr<<ans<<endl;
loop(i,0,n-1){cout<<a[i]<<" ";}
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
