#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define OO 1e9

using namespace std;
const int N=2e5+5,oo=1e9+10;
int a[N],b[N],sum,n,st[4*N];
void build(int p,int l,int r){
if(l==r){st[p]=b[l];return;}
int mid = (l + r) / 2;
build(p*2,l,mid);
build(p*2+1,mid+1,r);
st[p]=max(st[2*p],st[2*p+1]);
}
void update(int p, int l,int r,int i,int x){
if(l == r){st[p]=x;return;}
int mid = (l + r) / 2;
if( i <= mid)update(p * 2,l , mid, i, x);
else update(p * 2 + 1, mid + 1, r, i ,x);
st[p] =max(st[p * 2],st[p * 2 + 1]);
}
int main(){
scanf("%d",&n);
for(int i=1;i<=n;i++){scanf("%d%d",a+i,b+i);sum+=a[i];}
build(1,1,n);
for(int i=1;i<=n;i++){
int x=sum-a[i];int tmp=b[i];
update(1,1,n,i,-1);
int y=st[1];
//cerr<<y<<endl;
x*=y;
printf("%d ",x);
update(1,1,n,i,tmp);
}
return 0;
}
