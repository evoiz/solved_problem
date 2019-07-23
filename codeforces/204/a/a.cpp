#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
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
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
ll ans,mem[20][3][11],n,tmp;
string s;
ll dp(int pos,int ok,int fr){
if(pos==n-1){return ((ok!=0 && fr!=0)||(fr<=s[pos]&& fr!=0));}
ll &ret=mem[pos][ok][fr];
if(ret!=-1){return ret;}
ret=0;
int n_fr=0;
if(ok){

loop(i,0,9){
if(fr==0 && i>0){n_fr=i;}
if(fr!=0){n_fr=fr;}
ret+=dp(pos+1,ok,n_fr);
}

}
else{
loop(i,0,s[pos]-1){
if(fr==0 && i>0){n_fr=i;}
if(fr!=0){n_fr=fr;}
ret+=dp(pos+1,1,n_fr);
}
if(fr==0 && s[pos]>0){n_fr=s[pos];}
if(fr!=0){n_fr=fr;}
ret+=dp(pos+1,0,n_fr);
}
return ret;
}
ll to_(string x){
ll ret=0ll;
for(auto c:x){ret*=10ll;ret+=(c-'0');}
return ret;
}
string  st(ll x){
string ret="";
while(x){
char c=(x%10)+'0';
ret=c+ret;
x/=10;
}
return ret;
}
int main(){
me(mem,-1);
cin>>tmp;
tmp--;
s=st(tmp);
n=s.length();
loop(i,0,n-1){s[i]-='0';}
ans-=min(9ll,tmp)+dp(0,0,0);

me(mem,-1);
cin>>s;
tmp=to_(s);
n=s.length();
loop(i,0,n-1){s[i]-='0';}
ans+=min(9ll,tmp)+dp(0,0,0);
printf("%lld\n",ans);
}
