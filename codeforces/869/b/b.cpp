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
using namespace std;
const int N=(2e5)+10;
const ll mod=1000000007ll;
ll n,m;
int main(){
scll(n);scll(m);
ll pr=1;
for(ll i=n+1;i<=m && pr;i++){pr*=i;pr%=10ll;}
printf("%lld\n",pr);
return 0;
}/*
**/
