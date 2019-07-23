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
int n,p;
vector<int> l,r;
void solve(){
sc(n);sc(p);scs(s);
l.clear();
r.clear();
p--;
int l_=0,r_=n-1;
int cost=0;
while(l_<r_){
 if(s[l_]!=s[r_]){
   l.pb(l_);
   r.pb(r_);
   cost+=min(abs(s[l_]-s[r_]),min
   (s[l_],s[r_])+26-max(s[l_],s[r_]));
 }
 if(r_==p){p=l_;}
 l_++;
 r_--;
}
if(l.size()==0){printf("0\n");return ;}
//cerr<<cost<<endl;
//for(auto x:l){cerr<<x<<" ";}cerr<<endl;
int ans=(cost+ abs(l[0]-l[l.size()-1]) + min(abs(l[0]-p),abs(l[l.size()-1]-p)) );

printf("%d\n",ans);
}
int main(){
int t;
sc(t);
while(t--){solve();}
}
/**
**/
