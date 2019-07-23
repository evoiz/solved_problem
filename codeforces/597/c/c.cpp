#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e5+10,oo=1e5+9;
ll st[N*4],a[N],dp[N][15],n,k;
ll rsq(int p,int l,int r,int i, int j){
    if(l >= i && r <= j){return st[p];}
    if(r < i || l > j){return 0;}
    int mid = (l + r) / 2;
    ll x = rsq(p * 2, l, mid, i, j);
    ll y = rsq(p * 2 + 1, mid + 1, r, i, j);
    return 1ll*(x+y);
}
void update(int p, int l,int r,int i,ll x){
   if(l == r){st[p]=x;return;}
   int mid = (l + r) / 2;
   if( i <= mid)update(p * 2,l , mid, i, x);
  else update(p * 2 + 1, mid + 1, r, i ,x);
  st[p] = st[p * 2] + st[p * 2 + 1];
}

int main(){
scanf("%lld%lld",&n,&k);
   for(int i=0;i<n;i++){scanf("%lld",a+i);dp[a[i]][1]=1;}
   k++;
   for(int len=2;len<=k;len++){
       memset(st,0,sizeof st);
       for(int i=0;i<n;i++){
         dp[a[i]][len]=rsq(1,1,oo,1,a[i]-1);
         update(1,1,oo,a[i],dp[a[i]][len-1]);
       }
   }
   ll ans=0;
   for(int i=0;i<n;i++){ans+=dp[a[i]][k];}
   cout<<ans<<endl;
 	return 0;
}
/**
dp[ val ][len];
dp[a[i]][1]=1;
dp[a[i]][2]=sum(dp[a[i]-1][1]);
dp[a[i]][3]=sum(dp[a[i]-1][2]);
dp[a[i]][3]=
dp[len][]

5 2
1 2 3 5 4

**/
