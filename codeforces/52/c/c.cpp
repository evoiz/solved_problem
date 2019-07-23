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
const int N=2e5+10;
ll oo=1e12+100;
ll tree[4*N],lazy[4*N],n,q,l,r,val,a[N];
char s[N];

void proc(int node, int st, int en) {
if (lazy[node] == 0){return;}
tree[node]+=1ll*lazy[node];
if (st != en) {
lazy[node*2]+=1ll*lazy[node];
lazy[node*2+1]+=1ll*lazy[node];
}
lazy[node]=0ll;
}
void update_lazy(int node, int st, int en, int L, int R, ll val) {
proc(node,st,en);
if (st > en || en < L || R < st){return;}
if (L <= st && en <= R) {
lazy[node]+=1ll*val;
proc(node,st,en);
return;
}
update_lazy(node*2, st, (st+en)/2, L, R, val);
update_lazy(node*2+1, (st+en)/2+1, en, L, R, val);
tree[node] =min(tree[node*2],tree[node*2+1]);
}
ll rsq(int node, int st, int en, int L, int R) {
proc(node, st, en);
if (st > en || en < L || R < st){return oo;}
if (L <= st && en <= R){return tree[node];}
ll p1 = rsq(node*2, st, (st+en)/2,L,R);
ll p2 = rsq(node*2+1, (st+en)/2+1,en,L,R);
return min(p1,p2);
}
int main(){
scll(n);
read_arr_ll(a,1,n);
loop(i,1,n){update_lazy(1,1,n,i,i,a[i]);}
scll(q);
gets(s);
while(q--){
 gets(s);
 if(sscanf(s,"%lld%lld%lld",&l,&r,&val)==3){
   l++;
   r++;
   if(l>r){update_lazy(1,1,n,1,r,val);update_lazy(1,1,n,l,n,val);}
   else{update_lazy(1,1,n,l,r,val);}
   continue;
 }
  l++;r++;
  ll ans=-1;
  if(l>r){ans=min(rsq(1,1,n,1,r),rsq(1,1,n,l,n));}
   else{ans=rsq(1,1,n,l,r);}
   printf("%lld\n",ans);
}
loop(i,1,n){cerr<<rsq(1,1,n,i,i)<<" ";}
}
/**

1
-1
10
0 0 -1
0 0
0 0 1
0 0
0 0 1
0 0
0 0 0
0 0
0 0 -1
0 0 1
**/
