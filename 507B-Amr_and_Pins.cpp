/*math */
#include <bits/stdc++.h>
using namespace std;
long long x1,x2,y1,y2,ans,r;
int main() {
    while(true){
    cin>>r>>x1>>y1>>x2>>y2;
     ans=ceil(sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))/(2.0*r));
     cout<<ans<<endl;

    return 0;
    }
}
