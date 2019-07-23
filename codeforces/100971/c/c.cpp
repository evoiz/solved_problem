#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N = (2e6) + 5;
int n,mx,a[N];
void solve(){
   scanf("%d",&n);
   for(int i=0;i<n;i++){scanf("%d",a+i);}
   sort(a,a+n);
   mx=a[n-1]-a[0]+1;
   printf(mx<a[0]+a[1]?"YES\n%d":"NO\n",mx);
}
int main(){
   solve();
       return 0;
}
/**
3
3
RPS
**/
