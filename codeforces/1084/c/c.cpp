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
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e5+10;
char s[N];
int n;
ll ans=1ll,mod=1e9+7;
int main(){
scs(s);n=strlen(s);
for(int i=0;i<n;i++){
ll a=1;
while(s[i]!='b' && i<n){a+=1ll*(s[i]=='a');i++;}
a%=mod;
ans%=mod;
///cerr<<a<<endl;
ans=1ll*ans*a;
ans%=mod;
}
ans--;
ans=((ans%mod)+mod)%mod;
printf("%lld\n",ans);
}
/**
100
2 1 2
**/
