#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=3e5+6;
ll n,k;
int main(){
scanf("%lld%lld",&n,&k);
if(n<=k){printf("-1\n");return 0;}
if(n%k!=0){printf("-1\n");return 0;}
printf("%lld %lld\n",k,n-k);
return 0;
}
/**
**/
