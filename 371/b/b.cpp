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
using namespace std;
const int N=1e5+10;
ll a,b;
ll aa[5],bb[5];
int main(){
scll(a);scll(b);

while(a%2==0){aa[0]++;a=1ll*a/2ll;}
while(b%2==0){bb[0]++;b=1ll*b/2ll;}

while(a%3==0){aa[1]++;a=1ll*a/3ll;}
while(b%3==0){bb[1]++;b=1ll*b/3ll;}

while(a%5==0){aa[2]++;a=1ll*a/5ll;}
while(b%5==0){bb[2]++;b=1ll*b/5ll;}
cerr<<a<<" "<<b<<endl;
if(a!=b){printf("-1\n");return 0;}
ll ans=0;
for(int i=0;i<3;i++){ans+=abs(aa[i]-bb[i]);}
printf("%lld\n",ans);
}
/**
0 1 2
1 2 0
1 0 2
**/
