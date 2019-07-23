#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
bool is(ll n){
for(int i=2;i*i<=n;i++){if(n%i==0){return 0;}}
return 1;
}
int main(){
ll n;scanf("%lld",&n);
if(is(n)){printf("1");return 0;}
if(n%2==0){printf("2");return 0;}
if(is(n-2)){printf("2");return 0;}
printf("3");
}
