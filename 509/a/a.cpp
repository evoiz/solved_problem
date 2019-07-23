#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;
long long comb(int n, int m){
    if(m>n-m) m = n-m;
    ////all n line
    long long C = 1;
    //C^{n}_{i} -> C^{n}_{i+1}
    for(int i=0;i<m;++i) C = C*(n-i)/(1+i);
    return C;
}
ll n;
int main() {
scll(n);
n--;
printf("%lld\n",comb(2ll*n,n));
}

/**
dp(i)=dp(i-1)+dp(i-m);

a=|11111|
b=|000|
  |101|
  |011|
**/
