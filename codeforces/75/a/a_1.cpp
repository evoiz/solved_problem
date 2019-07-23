#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e5+10;
long long a,b;
long long ch(ll x){
ll ans=0;
while(x){
if(x%10){ans*=10ll;}
ans+=1ll*x%10;
x/=10;
}
ll res=0ll;
while(ans){
res*=10ll;
res+=1ll*ans%10;
ans/=10ll;
}
return 1ll*res;
}
int main(){
scanf("%I64d%I64d",&a,&b);
cout<<(ch(a+b)==ch(a)+ch(b)?"YES\n":"NO\n");

    return 0;
}
