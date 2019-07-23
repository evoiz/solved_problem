#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e5+10,oo=1e9;
ll a[N],n,ans;
struct nod{
int mx, mn, len;
}st[4*N];

nod mrg(nod a,nod b){
nod res;
res.mx=max(a.mx,b.mx);
res.mn=min(a.mn,b.mn);
return res;
}
void build(int p,int l, int r){
if (l==r){nod res;res.mx=a[l];res.mn=a[l];st[p]=res;return;}
int mid=(l+r)/2;
build(2*p,l,mid);
build(2*p+1,mid+1,r);
st[p]=mrg(st[p*2],st[p*2+1]);
}
nod query(int p,int l,int r,int i,int j){
if (l>=i&&r<=j){return st[p];}
if (l>j||r<i){nod res;res.mn=oo;res.mx=-oo;return res;}
int mid=(l+r)/2;
nod x=query(2*p,l,mid,i,j);
nod y=query(2*p+1,mid+1,r,i,j);
return mrg(x,y);
}
int main(){
scanf("%lld",&n);
for(int i=1;i<=n;i++){scanf("%lld",a+i);}
build(1,1,n);
for(int i=1;i+ans<=n;i++){
  ll tmp=ans;
  for(int j=i+ans;j<=n;j++){
     nod nn=query(1,1,n,i,j);
     ll mxx=nn.mx;
     ll mnn=nn.mn;
     ///cerr<<i<<" "<<j<<"\t"<<mnn<<" "<<mxx<<endl;
     if(abs(mxx-mnn)>1){break;}
     tmp++;
  }
  ans=tmp;
}
printf("%lld\n",ans);
}
