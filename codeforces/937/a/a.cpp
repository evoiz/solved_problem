#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
ll x,p;
set<ll>st;
int main(){
scanf("%lld",&x);
while(x--){scanf("%lld",&p);st.insert(p);}
ll ans=st.size()-st.count(0);
printf("%lld",ans);
}
