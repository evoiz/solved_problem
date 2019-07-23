#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e3+10,oo=1e9+7,mod=1e9+7;
ll n , m ,t;
int main(){
    scanf("%lld",&t);
    while(t--){
    scanf("%lld%lld",&n,&m);
    if(n>m){swap(n , m );}
    ll ans=((m+1-(m/2+1))*((n+1)/2))+(n/2)*(m/2+1);
    printf("%lld\n",ans);
}
    return 0;
}
/**
1000
5 4
2 1 1 1
ans=
1 1 2 1

1 2 3 2 1 2 3 2

**/
