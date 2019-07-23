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
const int N =5000000+10;
int ch[N];
ll pr[N];
void sieve(){
ch[1]=1;
for(int i=2;i<N-3;i++){ch[i]=i;}
for(int i=4;i<N-3;i+=2){ch[i]=2;}

for(int i=3;i*i<N-3;i++){
    if (ch[i]==i){
        for (int j=i*i; j<N-3; j+=i){
                if(ch[j]==j){ch[j]=i;}
        }
    }
 }
}
ll cal(int x){
    ll ret=0ll;
    while (x!=1){
        ret+=1ll;
        x = x/ch[x];
    }
    return ret;
}
void init(){
for(int i=2;i<N-3;i++){
 pr[i]=pr[i-1]+cal(i);
}
}
ll n,t,a,b;
int main(){
sieve();
init();
scll(t);
while(t--){
scll(b);scll(a);
ll ans=pr[b]-pr[a];
printf("%lld\n",ans);
}
}
