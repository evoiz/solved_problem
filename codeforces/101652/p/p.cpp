#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
ll sigma(ll a, ll b) {
   return (a + b + 1) * (b - a) / 2 ;
}
ll res(ll a, ll b) {
   ll sqr = sqrt(b),ans=0;
   for (long long i=1;i<=sqr;i++)
      ans+=i*(b/i-a/i)+sigma(max(sqr, a/i),max(sqr, b/i));
   return ans;
}
ll a,b;
int main() {
  scanf("%I64d%I64d",&a,&b);
   printf("%I64d\n",res(a-1, b));

}
