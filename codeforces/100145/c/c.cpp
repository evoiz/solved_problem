#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const ll N=2e3+10,oo=1e9;
ll gcdExtended(ll a, ll b, ll *x, ll *y){
    // Base Case
    if (a == 0){
        *x = 0;
        *y = 1;
        return b;
    }

    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}
ll x,y,a,b;
int main(){
    while(scanf("%lld%lld",&a,&b)!=EOF){
    ll g = gcdExtended(a, b, &x, &y);
    //if(y==0){swap(x,y);}
    if(a==b && x>y){swap(x,y);}
    printf("%lld %lld %lld\n",x,y,g);
    }
    return 0;
}
/**
ax + by = d
4x + 6y =2
90x + 24y=6
x=1  y=-4;
15x + 4y=1
15x=4y-1
15x=4y-1
///////
17x+11y=1

**/
