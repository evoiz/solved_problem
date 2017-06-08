/** math **/
#include <bits/stdc++.h>
using namespace std;
int  m[1000],n;
int main() {
    while(true){
    cin>>n;
    cin>>m[0]>>m[1];
    int gd=__gcd(m[0],m[1]);
    for(int i=2;i<n;i++){cin>>m[i];gd=__gcd(__gcd(m[i],m[i-1]),gd);}
    int ans=(gd)*n;
    cout<<ans<<endl;
    
    return 0;
    }
}
