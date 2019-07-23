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
int a,b,c;
int main(){
sc(a);sc(b);sc(c);
printf("%d\n",min(a,min(b/2,c/4))*7);

return 0;
}/**
a input
n^2 -n - (2a) =0
delta = 1 + 8a
b-sqrt(delta)/(2a)

**/
