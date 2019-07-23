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
const int N=1e5+4;ll inf=1e10;
set<char> st[30];
int mem[N][30];
char a[N],b[N];
int na,k,nb,t;
int main(){
sc(t);
while(t--){
for(int i=0;i<30;i++){st[i].clear();}
me(mem,0);
sc(na);sc(nb);sc(k);
scs(a+1);scs(b+1);
for(int i=1;i<=na-(k-1);i++){st[a[i]-'a'].insert(a[i+(k-1)]);}
//for(auto x:mp){cerr<<x.F<<" "<<x.S<<endl;}
  for(char c='a';c<='z';c++){
    for(int i=nb;i>=1;i--){
       mem[i][c-'a']=mem[i+1][c-'a']+(b[i]==c);
    }
  }
  ll ans=0ll;
 for(int i=1;i<=nb;i++){
   if(st[b[i]-'a'].size()){
     for(auto c:st[b[i]-'a']){ans+=1ll*mem[i][c-'a'];}
   }
 }
 printf("%lld\n",ans);
}
return 0;
}
/**
2
4 5 3
acbd
abcbd
3 3 1
kkd
dkd


**/