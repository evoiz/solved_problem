#include <bits/stdc++.h>
#define F first
#define S second
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
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10;
struct node{
   int mx,mn,sum;
   node(){mx=mn=sum=0;}
   node(int x){mx=mn=sum=x;}
   node(int x,int y,int z){mx=x;mn=y;sum=z;}
   node operator+(node s){return node(max(mx,s.mx),min(mn,s.mn),sum+s.sum); }
}tree[4*N];
int a[N],n,m;
void build(int p,int l,int r){
    if(l==r){tree[p]=a[l];return;}
    int mid = (l + r) / 2;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
    tree[p]=(tree[2*p]+tree[2*p+1]);
}
void update(int p, int l,int r,int i,int x){
    if(l == r){tree[p]=x;return;}
    int mid = (l + r) / 2;
    if( i <= mid)update(p * 2,l , mid, i, x);
    else update(p * 2 + 1, mid + 1, r, i ,x);
    tree[p] =(tree[p * 2]+tree[p * 2 + 1]);
}
node rsq(int p,int l,int r,int i,int j){
    if(l >= i && r <= j){return tree[p];}
    if(r < i || l > j){return node(-1,113,0);}
    int mid = (l + r) / 2;
    node x = rsq(p * 2, l, mid, i, j);
    node y = rsq(p * 2 + 1, mid + 1, r, i, j);
    return x+y;
}
int main(){
	sc(n);sc(m);
	read_arr(a,1,n);
	build(1,1,n);
	while(m--){
		int t,l,r;
		sc(t);sc(l);sc(r);
		if(t==2){
			update(1,1,n,l,r);
			continue;
		}
		node tmp=rsq(1,1,n,l,r);
		printf("%d\n",tmp.sum-tmp.mx-tmp.mn);
	}
	
}
