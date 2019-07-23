#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define OO 1e9

using namespace std;

const int N=5e5+5;

ll st[4*N],lazy[4*N],a[N],n,q,x,y;

void build(int p,int l, int r){
    if (l==r){st[p]=a[l];return;}
    int mid=(l+r)/2;
    build(2*p,l,mid);
    build(2*p+1,mid+1,r);
    st[p]=max(st[p*2],st[p*2+1]);
}
void proc(int p,int l,int r){
if(!lazy[p]){return ;}
    st[p]=max(lazy[p],st[p]);
    if (l!=r){
        lazy[2*p]=max(lazy[p],st[p]);
        lazy[2*p+1]=max(lazy[p],st[p]);
    }
    lazy[p]=0;
}
ll query(int p,int l,int r,int i,int j){
    proc(p,l,r);
    if (l>=i&&r<=j){return st[p];}
    if (l>j||r<i){return 0;}
    int mid=(l+r)/2;
    ll x=query(2*p,l,mid,i,j);
    ll y=query(2*p+1,mid+1,r,i,j);
    return max(x,y);
}

void update(int p,int l,int r ,int i,int j,ll x){
    proc(p,l,r);
    if (l>j||r<i)return;
    if (l>=i&&r<=j){lazy[p]=x;proc(p,l,r);return;}
    int mid=(l+r)/2;
    update(2*p,l,mid,i,j,x);
    update(2*p+1,mid+1,r,i,j,x);
    st[p]=max(st[2*p],st[2*p+1]);
}

int main(){
scanf("%lld",&n);
for(int i=1;i<=n;i++){scanf("%lld",a+i);}
build(1,1,n);
cerr<<query(1,1,n,1,2)<<endl;
scanf("%lld",&q);
while(q--){
  scanf("%lld%lld",&x,&y);
  ll mx=query(1,1,n,1,x);
 cout<<mx<<endl;
  update(1,1,n,1,x,mx+y);
}

}
