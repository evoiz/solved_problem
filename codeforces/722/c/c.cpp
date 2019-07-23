/**


    fucking gcc 1


**/
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e5+10;
ll a[N],x,oo=1ll<<46,n;

struct nod{ll sum,r,l,best;}st[4*N];
inline nod add(nod a,nod b){
 ll l,r,best,sum;
  sum=a.sum+b.sum;
  r=max(a.r+b.sum,max(b.r,sum));
  l=max(b.l+a.sum,max(a.l,sum));
  //r=max(0ll,r);l=max(0ll,l);
  best=max(l,max(r,max(a.best ,max(b.best,max(a.r+b.l,sum)))));
  best =max(best, a.r);
  best =max(best, b.l);
  best=max(best,max(a.sum,b.sum));
  nod ret;
  ret.best=best;
  ret.l=l;
  ret.r=r;
  ret.sum=sum;
  return ret;
}
inline void build(int p,int l,int r){
if(l==r){nod ret;ret.best=ret.l=ret.r=ret.sum=a[l];st[p]=ret;return;}
int mid = (l + r) / 2;
build(p*2,l,mid);
build(p*2+1,mid+1,r);
st[p]=add(st[2*p],st[2*p+1]);
}
inline void update(int p, int l,int r,int i){
if( i<l || i>r )return;
if(l == r){nod ret;ret.best=ret.l=ret.r=ret.sum=-oo;st[p]=ret;return;}
int mid = (l + r) / 2;
if(i<= mid)update(p*2,l,mid,i);
else update(p*2+1,mid+1,r,i);
st[p]=add(st[p*2],st[p*2+1]);
}
int main(){
scanf("%lld",&n);
for(int i=1;i<=n;i++){scanf("%lld",a+i);}
build(1,1,n);
for(int i=1;i<n;i++){
scanf("%lld",&x);
update(1,1,n,x);
nod ans=st[1];//rsq(1,1,n,1,n);
printf("%lld\n",ans.best);
}
printf("0\n");
}