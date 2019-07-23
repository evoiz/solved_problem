#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(ll i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(ll i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(ll i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=25;
ll C[N][N];
void FillLucasTable(){
    memset(C,0,sizeof(C));
    //// all pascal tringel
    for(int i=0;i<N;++i) C[i][0] = 1;
    for(int i=1;i<N;++i) C[i][i] = 1;
    for(int i=2;i<N;++i)
        for(int j=1;j<i;++j)
            C[i][j]=1ll*(C[i-1][j]+C[i-1][j-1]);
}
int main(){
freopen("popcorn.in","r",stdin);
FillLucasTable();
int t;
sc(t);
while(t--){
int n,m;
sc(n);sc(m);
printf("%lld\n",C[n][m]);
}

}
