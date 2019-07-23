/**math**/
#include <bits/stdc++.h>
using namespace std;
long long ans,a,b,c,n;
int main(){
cin>>n>>a>>b>>c;
if(a<=b-c){cout<<n/a<<endl;return 0;}
if(c>n){cout<<n/a<<endl;return 0;}
ans=((n-c)/(b-c));
ans=ans+((n-(ans*(b-c)))/a);
cout<<ans<<endl;
}
/**

**/
