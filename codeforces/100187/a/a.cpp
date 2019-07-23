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
using namespace std;
const int N=200000+10;
ll ans[N],n,k;
int main(){
scll(n);scll(k);
if(k==1){printf("%lld\n",n-1);return 0;}
if(n==1){printf("0\n");return 0;}
if(n==k){printf("-1");return 0;}
if(n%k<=1){printf("%lld\n",n/k);return 0;}
ll ans=n/k+1;
printf("%lld\n",ans);
}
/**
1 23
1 32

n * (n-1) * (n-2)

**/
