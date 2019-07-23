#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=(1<<18)+10,oo=1e9;

ll a[N],n,q,in,x;

struct node{
ll sum;
bool xr;
}st[4*N];

node mrg(node a,node b){
if(a.sum==-1){return b;}
if(b.sum==-1){return a;}
node ret;
if(a.xr){ret.sum=(a.sum^b.sum);}
else{ret.sum=(a.sum|b.sum);}
ret.xr=(a.xr?0:1);
return ret;
}

void build(int p,int l, int r){
    if(l==r){
      node ret;
      ret.sum=a[l];
      ret.xr=0;
      st[p]=ret;
      return;
    }
int mid=(l+r)/2;
build(2*p,l,mid);
build(2*p+1,mid+1,r);

st[p]=mrg(st[p*2],st[p*2+1]);
}

node query(int p,int l,int r,int i,int j){
    if (l>=i&&r<=j){
    return st[p];
    }

    if (l>j||r<i){
    node ret;
    ret.sum=-1;
    ret.xr=0;
    return ret;
    }
int mid=(l+r)/2;
node x=query(2*p,l,mid,i,j);
node y=query(2*p+1,mid+1,r,i,j);
return mrg(x,y);
}

void update(int p,int l,int r,int i,int x){
    if(l==r){
     node ret;
      ret.sum=x;
      ret.xr=0;
      st[p]=ret;
        return;
    }
    int mid=(l+r)/2;
    if (i<=mid)update(2*p,l,mid,i,x);
    else update(2*p+1,mid+1,r,i,x);

    st[p]=mrg(st[p*2],st[p*2+1]);
}
int main(){
scanf("%lld%lld",&n,&q);
n=(1<<n);
for(int i=1;i<=n;i++){scanf("%lld",a+i);}
build(1,1,n);
while(q--){
scanf("%lld%lld",&in,&x);
update(1,1,n,in,x);
ll tmp=query(1,1,n,1,n).sum;
printf("%lld\n",tmp);
}
return 0;
}
