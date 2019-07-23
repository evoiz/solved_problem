#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
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
const int N =(1e5)+10;
ll oo=1e11;
ll a[N],mem[2][2],n;
int  main(){
scll(n);
read_arr_ll(a,0,n);
mem[n&1][1]=0;
mem[n&1][0]=-oo;
for(int i=n-1;i>=0;i--){
  int mod=(a[i]%2+2)%2;
  mem[i&1][0]=max(mem[(i+1)&1][0],a[i]+mem[(i+1)&1][mod]);
  mem[i&1][1]=max(mem[(i+1)&1][1],a[i]+mem[(i+1)&1][(mod+1)&1]);
}
cout<<mem[0][0]<<endl;
}
