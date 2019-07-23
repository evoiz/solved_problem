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
const int N = 1e5 + 5;


ll t,n,d,c,a[N];

int main(){
    scanf("%lld" , &t);

    for(ll tt = 1 ; tt <= t ;tt++){
        scanf("%lld%lld%lld",&n,&d,&c);
        for(int i=1;i<=n;i++){scanf("%lld",a+i);}
        ll mn = d*n;
        sort(a+1,a+n+1);
        for(ll i=1;i<=n;i++){mn = min( (i*a[i]*c) + ((n-i)*d) , mn);}
        printf("Case %lld: %lld\n",tt,mn);
    }
}
/**

2
10 3 9
1 1 2 2 1 1 2 3 1 2
10 3 9
1 1 2 2 1 1 2 3 1 2

**/
