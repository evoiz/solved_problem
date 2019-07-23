#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
long long t,a,b,c,mod=1e9+7;
int tmp=1;
long long dfs(long long aa,long long bb){
if(aa>a || bb>b){return 0;}
if(aa==a && bb==b){return 1;}
long long ans=dfs(aa+1,bb)+dfs(aa+1,bb+1);
return ans;
}
int main(){
scanf("%I64d",&t);
while(t--){
scanf("%I64d%I64d",&a,&b);
long long ans=a-1+b;
printf("%I64d\n",ans);
}
    return 0;
}