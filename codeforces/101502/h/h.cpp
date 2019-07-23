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
const int N=1e3+10;
const double eps=1e-10;
ll pow_(ll a,ll b,ll mod=1e9+7){
    ll ans=1ll;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}

int cmp(double a,double b){
if( fabs(a-b) < eps )return 0;
if( a-b > eps )return 1;return -1;
}

pair<int,int> best(pair<int,int> a,pair<int,int> b){
double xx=1.0*a.S*log2(a.F);
double yy=1.0*b.S*log2(b.F);
if(cmp(xx,yy)>=0){return a;}
return b;
}
int get(int x){
pair<int,int> ret={1,1};
for(int i=1;i*i<=x;i++){
  if(x%i==0){
    ret=best(ret,{i,x/i});
    ret=best(ret,{x/i,i});
  }
}
return ret.F;
}
bool ch[N];
vector<ll>pr;
void sieve(){
for(long long i=2;i<N-3;i++){
    if(!ch[i]){
        pr.pb(i);
        for(long long j=i*2;j<=N-3;j+=i){ch[j]=1;}
    }
 }
}
int test(){
sieve();
loop(i,2,N-4){
cerr<<i<<" "<<get(i)<<endl;
if(ch[get(i)]){cerr<<i<<" "<<get(i)<<endl;}
}
cout<<"proof"<<endl;
}
int main(){
int t;
sc(t);
while(t--){
pair<int,int> a;
pair<int,int> b;
sc(a.F);sc(a.S);
sc(b.F);sc(b.S);
if(best(a,b)==a){printf(">\n");continue;}
printf("<\n");
}

}
/**
5
1 8 7 2 4
9 7 2 9 3

**/
