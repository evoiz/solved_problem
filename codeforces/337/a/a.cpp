#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,n;cin>>t>>n;
   int m[n];
   for(int i=0;i<n;i++){cin>>m[i];}
   sort(m,m+n);
   ////for(int i=0;i<n;i++){cout<<m[i]<<" ";}cout<<endl;
   int ans=1e6;
   for(int i=0;i<n-t+1;i++){ans=min(ans,m[i+t-1]-m[i]);}
   cout<<ans<<endl;
    return 0;
}