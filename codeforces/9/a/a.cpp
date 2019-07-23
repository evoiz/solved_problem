#include <bits/stdc++.h>
using namespace std;
int a,b,ans;
int main() {
cin>>a>>b;
ans=6-max(a,b)+1;
a=__gcd(ans,6);
cout<<ans/a<<"/"<<6/a;
}
/**

**/
