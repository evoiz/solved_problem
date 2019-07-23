#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
ll x,p;
bool ok(ll n){
    ll tmp=min(p,(ll)sqrt(n));
   for(int i=2;i<=tmp;i++){if(n%i==0){return 0;}}
   return 1;
}
int main(){
scanf("%lld%lld",&p,&x);
  while(!ok(x)){
    if(x==p){printf("-1\n");return 0;}
    x--;
  }
  if(x==p){printf("-1\n");return 0;}
  printf("%lld\n",x);
}
