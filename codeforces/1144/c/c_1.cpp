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
const int N=2e5+10;
int n,tmp,tw;
vector<int> a,b;
map<int,int> mp;
int main(){
sc(n);
loop(i,1,n){
sc(tmp);
mp[tmp]++;
}
for(auto x:mp){
if(x.S>=3){
  printf("NO\n");
  return 0;
}
if(x.S==2){
 a.pb(x.F);
 b.pb(x.F);
 continue;
}
if(x.S==1){
a.pb(x.F);
}

}
sort(all(b),greater<int> ());
sort(all(a));
printf("YES\n");
printf("%d\n",a.size());
for(auto x:a){printf("%d ",x);}
printf("\n");
printf("%d\n",b.size());
for(auto x:b){printf("%d ",x);}
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
