#include <bits/stdc++.h>
using namespace std;
bool ok=0;
long long n,ans;
int main() {
scanf("%I64d",&n);
if(n%2){ans=((n/2)+1)*((n/2)+1)+(n/2)*(n/2);}
else{ans=(n/2)*n;}
cout<<ans<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){cout<<((i%2)==(j%2)?"C":".");}
    cout<<endl;
 }
}
