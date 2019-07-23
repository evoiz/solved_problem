#include <bits/stdc++.h>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e4+10;
ll n,m,c,t,tmp,sum,ans;
pair<ll,ll>p[N];
bool com(pair<ll,ll>a,pair<ll,ll>b){
    if(a.F==b.F){return a.S>b.S;}
    return a.F>b.F;
}
int main(){
scanf("%lld",&t);
for(int tt=1;tt<=t;tt++){
memset(p,0,sizeof p);
scanf("%lld%lld%lld",&m,&n,&c);
for(int i=1;i<=n;i++){p[i].S=1ll*(i*i)%c;}
for(int i=1;i<=m;i++){scanf("%lld",&tmp);p[tmp].F+=1ll;}
sort(p+1,p+n+1,com);
ans=0ll;sum=0ll;
        for(int i=1;i<=n;i++){
            if(p[i].F==0){break;}
            sum+=p[i].S;
            ans=max(ans,p[i].F*sum);
        }
printf("Case %d: %lld\n",tt,ans);
}
return 0;
}
/**

2
10 3 9
1 1 2 2 1 1 2 3 1 2
10 3 9
1 1 2 2 1 1 2 3 1 2

**/
