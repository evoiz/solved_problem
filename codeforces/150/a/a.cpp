#include <bits/stdc++.h>
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
using namespace std;
const int N=1e5+10,M=1e4+10;
ll n,nn;
vector<ll> pr;
int main(){
scll(n);
nn=n;
for (ll i=2;i*i<=n;i++){
        if (n%i==0){
            while(n%i==0){
                n/=i;
                pr.pb(i);
            }
        }
    }
    if (n>1 && n!=nn){pr.pb(n);}
    if(pr.size()==0){printf("1\n0\n");return 0;}
    if(pr.size()<=2){printf("2\n");return 0;}
    ll ans=pr[0]*pr[1];
    printf("1\n%lld\n",ans);
}


/**
1 2 3 6 |1 2 3
1 2 1 2 |1 2 1
1 1 1 3 |1 1 1
1 2 3 6 |1 2 3
12+6+12+18-6-4-18-36
**/
