#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
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
using namespace std;
const int N=(1e5)+10;
ll n,sum,mx,tmp;
int main(){
scll(n);
for(int i=0;i<n;i++){scll(tmp);mx=max(tmp,mx);sum+=tmp;}
ll ans=ceil(1.0*sum/(n-1));
ans=max(mx,ans);
printf("%lld\n",ans);
return 0;
}/**
5
3 2 3 4 3
**/
