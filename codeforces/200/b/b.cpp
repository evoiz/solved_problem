#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,tmp;cin>>n;
   double ans;
   for(int i=0;i<n;i++){cin>>tmp;ans+=tmp;}
   ans/=n;
   cout<<setprecision(12)<<fixed<<ans<<endl;
    return 0;
}
