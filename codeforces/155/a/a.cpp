#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,ans=0,tmp;cin>>n;
    int m[n];cin>>m[0];
  int low=m[0],higth=m[0];
  for(int i=1;i<n;i++){
    cin>>tmp;
    if(tmp>low){ans++;low=tmp;}
    if(tmp<higth){ans++;higth=tmp;}
  }
  cout<<ans<<endl;
    return 0;
}
