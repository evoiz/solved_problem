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
const int N=1e5+10;
char s[N];
int t,n;
map<char,int> mp;
int main(){
sc(t);
while(t--){
scs(s);
n=strlen(s);
bool ok=1;
mp.clear();
sort(s,s+n);
loop(i,0,n-1){
mp[s[i]]++;
if(mp[s[i]]>=2){ok=0;}
}
loop(i,0,n-2){
 if(abs(s[i]-s[i+1])!=1){ok=0;}
}
printf(ok?"YES\n":"NO\n");
}

}

/**
100
7
1 2 3 4 4 3 2
7
2 4 4 4 3 2 1
5
3 2 2 1 1
5
1 1 2 2 3
5
1 2 3 2 1
**/
