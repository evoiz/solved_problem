#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e2+10;
int a[N],cost[N],st[4*N],n,t;
int c(ll x){
int ans=0;
while(true){if(x&(1<<ans)){break;}ans++;}
return ans;
}
int rsq(int p,int l,int r,int i,int j){
    if(l >= i && r <= j){return st[p];}
    if(r < i || l > j){return 0;}
    int mid = (l + r) / 2;
    int x = rsq(p * 2, l, mid, i, j);
    int y = rsq(p * 2 + 1, mid + 1, r, i, j);
    return max(x,y);
}
void update(int p, int l,int r,int i,int x){
    if(l == r){st[p]=x;return;}
    int mid = (l + r) / 2;
    if( i <= mid)update(p * 2,l , mid, i, x);
    else update(p * 2 + 1, mid + 1, r, i ,x);
    st[p] =max(st[p * 2],st[p * 2 + 1]);
}
map<int ,int> mp;
int main(){
scanf("%d",&t);
while(t--){
mp.clear();
memset(st,0,sizeof st);
scanf("%d",&n);
for(int i=1;i<=n;i++){scanf("%d",a+i);cost[i]=c(a[i]);mp[a[i]]=1;}
int co=2;
int ans=-1;
for(auto x:mp){mp[x.F]=co;co++;}
for(int i=1;i<=n;i++){
    int tmp=cost[i]+rsq(1,1,N-1,1,mp[a[i]]-1);
    update(1,1,N-1,mp[a[i]]-1,tmp);
}
ans=rsq(1,1,N-1,1,N-1);
printf("%d\n",ans);
}
    return 0;
}
/**
2
3
1 10 16
2
8 12


**/
