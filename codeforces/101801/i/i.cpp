
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
const int N=1e5+10,mod=1e9+7;
int a[N],n,q;
ll pow_(ll a,ll b){
    ll ans=1ll;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
void solve(){
sc(n);sc(q);
loop(i,1,n){int tmp;sc(tmp);a[i]=tmp%2;a[i]+=a[i-1];}
while(q--){
 int st,en,ty;
 sc(st);sc(en);sc(ty);
 int odd=a[en]-a[st-1];
 int even=en-st+1-odd;
 odd=(pow_(2ll,odd)-1)%mod;
 even=((pow_(2,en-st+1)-1)%mod)-odd;
 even=((even%mod)+mod)%mod;
 if(ty){printf("%d\n",odd);}
 else{printf("%d\n",even);}
}

}
int t;
int main(){
sc(t);
while(t--){
solve();
}
return 0;
}
/**
3
3 3 2
1 0 1
0 0 0
1 0 0
4 4 2
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
5 5 5
1 0 1 0 1
0 1 0 1 0
0 0 0 0 0
0 1 0 0 0
1 0 1 1 1
**/
