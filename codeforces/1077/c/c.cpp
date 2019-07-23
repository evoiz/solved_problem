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
const int N=2e5+10;
ll n,a[N],st[4*N],sum;
int rsq(int p,int l,int r,int i,int j){
    if(l >= i && r <= j){return st[p];}
    if(r < i || l > j){return -1e9;}
    int mid = (l + r) / 2;
    int x = rsq(p * 2, l, mid, i, j);
    int y = rsq(p * 2 + 1, mid + 1, r, i, j);
    return max(x,y);
}
void update(int p, int l,int r,int i,int x){;
    if(l == r){st[p]=x;return;}
    int mid = (l + r) / 2;
    if( i <= mid)update(p * 2,l , mid, i, x);
    else update(p * 2 + 1, mid + 1, r, i ,x);
    st[p] = max(st[p * 2],st[p * 2 + 1]);
}
vector<int>v;
int main(){
scll(n);
for(int i=1;i<=n;i++){
scll(a[i]);
update(1,1,n,i,a[i]);
sum+=a[i];
}
ll ans=0;
for(int i=1;i<=n;i++){
ll tmp=a[i];
update(1,1,n,i,-1);
ll mx=rsq(1,1,n,1,n);
if(sum-tmp-mx==mx){ans++;v.pb(i);}
update(1,1,n,i,tmp);
}
printf("%lld\n",ans);
for(auto x:v){
cout<<x<<" ";
}
    return 0;
}