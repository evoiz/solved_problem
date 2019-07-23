#include <bits/stdc++.h>
using namespace std;
long long a,b,c,ans;
int main(){
cin>>a>>b>>c;
ans=a-b;
(ans>c? ans=c+1:ans=ans);
cout<<ans<<endl;
}
