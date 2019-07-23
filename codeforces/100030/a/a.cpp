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
const int N=1e5,M=1e4+10;
void start(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
}
vector<ll> dv;
ll n,sum,cnt=1ll;
int main(){
start();
scll(n);
if(n==1){printf("1\n1");return 0;}
for (ll i=2;i*i<=n && i<=N;i++){
        if (n%i==0){
           ll p=1;
            while(n%i==0){
                n/=i;
                p*=i;
            }
            dv.pb(p);
            sum+=1ll*p;
        }
    }
    if (n>1){dv.pb(n);sum+=1ll*n;}
    /**cerr<<sum<<endl;
    for(auto x:dv){cerr<<x<<endl;}**/
    if(sum>N){printf("No solution\n");return 0;}
    printf("%lld\n",sum);
    for(auto x:dv){
        for(ll i=cnt+1;i<cnt+x;i++){
            printf("%lld ",i);
        }
        printf("%lld ",cnt);
        cnt+=x;
    }
}



/**
2
4 4
22 7 3 11
3 1 8 9
5 2 4 3
13 5 6 9
3 4
1 2 3 4
5 6 7 8
9 10 11 12

**/
