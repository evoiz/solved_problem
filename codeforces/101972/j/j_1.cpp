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
const int N=1e5+4;ll inf=1e9;
ll a,t;
ll countSetBits(ll n){
    ll c = 0ll;
    while(n){
        c+= n & 1;
        n>>=1;
    }
    return c;
}

ll pow_(ll a,ll b){
    ll ans=1ll;
    while(b){
        if(b&1)ans=ans*a;
        a=a*a;
        b>>=1;
    }
    return ans;
}
ll odd(ll n){
    ll c = countSetBits(n);
    return pow_(2ll, c);
}

int main(){
scll(t);
while(t--){
scll(a);
a=a-odd(a)+1;
printf("%lld\n",a);
}
return 0;
}
/**
1e9*1e9 - (1e9-a)*(1e9-b)

**/
