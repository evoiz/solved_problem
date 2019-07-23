#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
ll a[200010];
ll n,k,sum,ans;
set<ll> st;
int main() {
cin>>n;
for(int i=1;i<=n;i++){cin>>a[i];sum+=a[i];st.insert(sum);}
sum=0;
for(int i=n;i>=1;i--){
        if(st.size())st.erase(--st.end());
        sum+=a[i];
        if(st.find(sum)!=st.end()){ans=max(ans,sum);}
}
cout<<ans<<endl;
}
