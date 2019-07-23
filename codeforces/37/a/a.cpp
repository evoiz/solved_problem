#include <bits/stdc++.h>
using namespace std;
int m[1002],tmp,ans,mx,n;
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>tmp;m[tmp]++;}
for(int i=0;i<1001;i++){if(m[i]){ans++,mx=max(mx,m[i]);}}
cout<<mx<<" "<<ans<<endl;
return 0;
}
