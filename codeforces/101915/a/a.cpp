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
ll n,m,q,d;
ll digit(ll n){
    ll number_of_digits = 0;
    for (ll i = 1; i <= n; i *= 10){number_of_digits +=1ll *(n - i + 1);}
    return number_of_digits;
}
bool ok(ll x){
ll ans=digit(x)-d;
return ans<=m;
}
int main(){
scll(q);
while(q--){
    scll(m);scll(n);
    d=digit(n-1);
    ll l=n,h=1e18,mid;
    while(l<h){
        mid=(l+h+1ll)/2ll;
        if(ok(mid)){l=mid;}
        else{h=mid-1;}
    }
    l=((digit(l)-d)==m?l-n+1:-1);
    printf("%lld\n",l);
}
return 0;
}
/**
5 6 7 8 9 10 11 12
**/
