#include<bits/stdc++.h>
using namespace std;
const int N=1e6+6;
long long m[106];
long long n,ans,mn=1e9+8,mx;
int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
 cin>>n;
 for(int i=0;i<n;i++){
    cin>>m[i];
    ans=__gcd(ans,m[i]);
    mx=max(mx,m[i]);
    mn=min(mn,m[i]);
 }
 ans=(mx/ans)-n;
 cout<<(ans%2?"Alice":"Bob")<<endl;
}
/**
1 2 5 10 25 50
**/

