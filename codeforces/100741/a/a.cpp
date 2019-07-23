#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N = 1e4+10;
ll a[N],n,mod,l,r,q,ans,m;char c;
struct nod{
ll frq[12];
 nod(){memset(frq,0,sizeof frq);}
}st[4*N];
nod add(nod a,nod b){
nod ret;
 for(int i=0;i<12;i++){
   ret.frq[i]=a.frq[i]+b.frq[i];
 }return ret;
}
void build(int p,int l,int r){
    if(l==r){nod ret;int tmp=a[l]%mod;ret.frq[tmp]=a[l];st[p]=ret;return;}
    int mid = (l + r) / 2;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
    st[p]=add(st[2*p],st[2*p+1]);
}
nod rsq(int p,int l,int r,int i,int j){
if(l >= i && r <= j){return st[p];}
if(r < i || l > j){nod ret; return ret;}
int mid = (l + r) / 2;
nod x = rsq(p * 2, l, mid, i, j);
nod y = rsq(p * 2 + 1, mid + 1, r, i, j);
return add(x,y);
}
void update(int p, int l,int r,int i){
if(l==r){nod ret;int tmp=(a[l])%mod;ret.frq[tmp]=a[l];st[p]=ret;return;}
int mid = (l + r) / 2;
if(i<=mid)update(p * 2,l , mid, i);
else update(p * 2 + 1, mid + 1, r, i);
st[p] = add(st[p*2],st[p*2+1]);
}
int main(){
    printf("\n");
    scanf("%lld%lld",&n,&mod);
    for(int i=1;i<=n;i++){scanf("%lld",a+i);}
    build(1,1,n);
    scanf("%lld",&q);
    while(q--){
      cin>>c;
      if(c=='s'){scanf("%lld%lld%lld",&l,&r,&m);nod ret=rsq(1,1,n,l,r);ans=(ret.frq[m]);printf("%lld\n",ans);}
      else{
        scanf("%lld%lld",&l,&r);
        if(c=='+'){a[l]+=r;update(1,1,n,l);printf("%lld\n",a[l]);}
        if(c=='-'){r=(a[l]>=r)*r;a[l]-=r;update(1,1,n,l);printf("%lld\n",a[l]);}
      }
    }
    return 0;
}
/**
3 4
1 2 3
7
s 1 3 2
+ 2 1
s 1 3 3
- 2 1
- 3 1
s 1 3 2
- 1 2

2
3
6
2
2
4
1
**/
