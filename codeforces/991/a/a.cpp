#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=2e5+10,mod=1e9+7;
ll a,b,c,n;
int main(){
cin>>a>>b>>c>>n;
ll ans=n-((a+b)-c);
if(ans<=0 || c>a || c>b){cout<<-1;return 0;}
cout<<ans;
}
/**
**/
