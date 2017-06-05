#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    int m[n];
    for(int i=0;i<n;i++){
        cin>>m[i];
        ans+=m[i];
    }
    ans=abs(ans);
   ans=(ans/k)+(ans%k!=0);
    cout<<ans<<endl;
}
