#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
ll a,b;
ll rev(ll a){
ll ans=0;
while(a){
 ans*=10ll;
 ans+=a%10;
 a/=10;
}
return ans;
}
int main(){
scanf("%lld%lld",&a,&b);
a+=rev(b);
printf("%lld\n",a);
}
