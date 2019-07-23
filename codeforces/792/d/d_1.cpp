#include <bits/stdc++.h>
#define F first
#define S second
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
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
char s[N];
ll n,q,len,root,x;
ll getZ(ll x){
for(ll i=0;i<63;i++){
 if(x&(1ll<<i)){return i;}
}
}
ll getF(ll x){
if(x==root){return x;}
ll z=(x&(-x));
if((x+z)>0 && (x+z)<=n && (x+z)%(4ll*z)==2ll*z){return x+(z);}
if((x-z)>0 && (x-z)<=n && (x-z)%(4ll*z)==2ll*z){return x-(z);}
}
ll getR(ll x){
if(x&1){return x;}
ll z=(x&-x)/2;
return x+z;
}
ll getL(ll x){
if(x&1){return x;}
ll z=(x&-x)/2;
return x-z;
}
int main(){
scll(n);scll(q);
root=1ll*(n+1)/2;
///cout<<getF(12)<<" "<<getL(12)<<" "<<getR(12)<<endl;
while(q--){
scll(x);
scs(s);len=strlen(s);
for(int i=0;i<len;i++){
if(s[i]=='U'){x=getF(x);continue;}
if(s[i]=='L'){x=getL(x);continue;}
if(s[i]=='R'){x=getR(x);continue;}

}
printf("%lld\n",x);
}

}
/**
a
c
**/
