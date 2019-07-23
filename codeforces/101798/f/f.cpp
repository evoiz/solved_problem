#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define INF 1e9
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>

using namespace std;
const int N=1e7,oo=1e9+10;
ll a[N],n;
struct nod{
ll mx ,ans;
}st[N];
nod marg(nod a,nod b){
nod ret;
ret.mx=max(a.mx,b.mx);
ret.ans=a.ans+b.ans+abs(a.mx-b.mx);
return ret;
}
void build(int p,int l,int r){
if(l==r){
nod ret;ret.ans=0;ret.mx=a[l];
st[p] = ret;
return ;
}
int mid = (l + r) / 2;
build(p*2,l,mid);
build(p*2+1,mid+1,r);
st[p]=marg(st[2*p],st[2*p+1]);
}
int main(){
  scanf("%lld",&n);
  for(int i=1;i<=n;i++){scanf("%lld",a+i);}
  build(1,1,n);
  printf("%lld\n",st[1].ans);
}
