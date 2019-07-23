#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

ll a;
int main(){
scanf("%lld",&a);
if(a==1){printf("-1\n");return 0;}
printf("%lld %lld %lld\n",a,a+1,a*(a+1));

}
/**
2/n = (xy + yz + xz)/ xyz;
2 xyz = n(xy+yz+xz)
ex:
2 7 42
2*2*7*42=3(2*42+2*7+7*42)
x=n(xy+yz+xz)/2yz;
**/
