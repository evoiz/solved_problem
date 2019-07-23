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
const int N=1e5+10,oo=1e9+10;
struct q{
ll l,r,d;
}qu[N];
ll q,qq,n,a[N],sum[N],x,y,ans[N];
int main(){
scanf("%lld%lld%lld",&n,&q,&qq);
for(int i=1;i<=n;i++){scanf("%lld",a+i);}
for(int i=1;i<=q;i++)scanf("%lld%lld%lld",&qu[i].l,&qu[i].r,&qu[i].d);
while(qq--){scanf("%lld%lld",&x,&y);sum[x]++;sum[y+1]--;}
for(int i=1;i<N;i++){sum[i]+=sum[i-1];if(sum[i]){ans[qu[i].l]+=1ll*(sum[i]*qu[i].d);ans[qu[i].r+1]-=1ll*(sum[i]*qu[i].d);}}
for(int i=1;i<N;i++){ans[i]+=ans[i-1];a[i]+=ans[i];}
for(int i=1;i<=n;i++){printf("%lld ",a[i]);}

return 0;
}
/**
3 3 3

1 2 3

1 2 1
1 3 2
2 3 4

1 2
1 3
2 3



**/
