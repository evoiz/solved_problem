#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
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
#define read_arr(a,s,n) for(ll  i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(ll  i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(ll  i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) prll f("%lld",x);
#define prt(x) prll f("%d",x);
using namespace std;
const ll  N=4e5+10,M=300+10;
ll mod=1e9+7;
ll num_mask[N],a[N],n,q;
char s[30];
vector<ll>pr;
ll prime_inv[65];
ll pow_(ll a,ll b,ll mod){
    ll ans=1ll;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
void sieve(){
ll pr_=0;
for(long long i=2;i<M-3;i++){
    if(!num_mask[i]){
        pr.pb(i);
        num_mask[i]=(1ll<<pr_);
        for(long long j=i*2;j<=M-3;j+=i){num_mask[j]|=(1ll<<pr_);}
        pr_++;
    }
 }
 for(ll  i=0;i<pr.size();i++){
   prime_inv[i]=pow_(pr[i],mod-2,mod);
   //if(i<5)cerr<<prime_inv[i]<<endl;
   prime_inv[i]%=mod;
 }
}
////////////////////////////////////////////////////////////////////
ll tree[4*N],lazy[4*N],tree_mask[4*N],lazy_mask[4*N];

void proc(ll  node, ll  st, ll  en) {
if (lazy[node] == 1){return;}
tree[node]*=pow_(lazy[node],en-st+1,mod);
tree[node]%=mod;
if (st != en) {
lazy[node*2]*=lazy[node];
lazy[node*2]%=mod;
lazy[node*2+1]*=lazy[node];
lazy[node*2+1]%=mod;
}
lazy[node]=1;
}

void update_lazy(ll  node, ll  st, ll  en, ll  L, ll  R, ll  val) {
proc(node,st,en);
if (st > en || en < L || R < st){return;}
if (L <= st && en <= R) {
lazy[node]*=val;
lazy[node]%=mod;
proc(node,st,en);
return;
}
update_lazy(node*2, st, (st+en)/2, L, R, val);
update_lazy(node*2+1, (st+en)/2+1, en, L, R, val);
tree[node]=(tree[node*2]*tree[node*2+1])%mod;
}

ll  rsq(ll  node, ll  st, ll  en, ll  L, ll  R) {
proc(node, st, en);
if (st > en || en < L || R < st){return 1;}
if (L <= st && en <= R){return tree[node];}
ll  p1 = rsq(node*2, st, (st+en)/2,L,R)%mod;
ll  p2 = rsq(node*2+1, (st+en)/2+1,en,L,R)%mod;
return (p1*p2)%mod;
}


void proc_mask(ll  node, ll  st, ll  en) {
if (lazy_mask[node] == 0){return;}
tree_mask[node]|=lazy_mask[node];
if (st != en) {
lazy_mask[node*2]|=lazy_mask[node];
lazy_mask[node*2+1]|=lazy_mask[node];
}
lazy_mask[node]=0;
}

void update_lazy_mask(ll  node, ll  st, ll  en, ll  L, ll  R, ll  val) {
proc_mask(node,st,en);
if (st > en || en < L || R < st){return;}
if (L <= st && en <= R) {
lazy_mask[node]|=val;
proc_mask(node,st,en);
return;
}
update_lazy_mask(node*2, st, (st+en)/2, L, R, val);
update_lazy_mask(node*2+1, (st+en)/2+1, en, L, R, val);
tree_mask[node]=(tree_mask[node*2]|tree_mask[node*2+1]);
}

ll  rsq_mask(ll  node, ll  st, ll  en, ll  L, ll  R) {
proc_mask(node, st, en);
if (st > en || en < L || R < st){return 0;}
if (L <= st && en <= R){return tree_mask[node];}
ll  p1 = rsq_mask(node*2, st, (st+en)/2,L,R);
ll  p2 = rsq_mask(node*2+1, (st+en)/2+1,en,L,R);
return (p1|p2);
}
///////////////////////////////////////////////////////////////////
int main(){
sieve();
scll(n);scll(q);
loop(i,0,4*N-1){lazy[i]=1ll;tree[i]=1ll;}
loop(i,1,n){scll(a[i]);update_lazy(1,1,n,i,i,a[i]);update_lazy_mask(1,1,n,i,i,num_mask[a[i]]);}
for(ll l,r,x,i=1;i<=q;i++){
scll(l);scll(r);scll(x);
scs(s);
if(s[0]=='T'){
scll(l);scll(r);
ll ans=rsq(1,1,n,l,r)%mod;
ll mask=rsq_mask(1,1,n,l,r);
//cerr<<"ans="<<ans<<" mask="<<mask<<endl;
for(ll  i=0;i<pr.size();i++){
    if(mask&(1ll<<i)){
      //  cerr<<"bit="<<prime_inv[i]<<endl;
        ans=1ll*ans*(pr[i]-1)%mod;
        ans%=mod;
        ans=1ll*ans*prime_inv[i]%mod;
        ans%=mod;
        }
}
printf("%lld\n",ans);
}
else{
scll(l);scll(r);scll(x);
update_lazy(1,1,n,l,r,x);
update_lazy_mask(1,1,n,l,r,num_mask[x]);
}
}
return 0;
}
/**
4
1 2 3 4
1 3 1

500000004
333333336
400000003
142857144
818181824

**/

