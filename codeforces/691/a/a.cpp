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
ll n,k,ans;
int main(){
scanf("%lld",&n);
for(int i=0;i<n;i++){scanf("%lld",&k);ans+=k;}
cerr<<ans<<n<<endl;
if((n==1) && ans){printf("YES\n");return 0;}
if((n-1)==ans && n>1){printf("YES\n");return 0;}
printf("NO\n");
return 0;
}
