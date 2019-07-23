#include <bits/stdc++.h>

using namespace std;
double a,b,ans,q;
int main(){
 cin>>q;
 while(q--){
    cin>>a>>b;
    double pi=acos(-1);
    ////cout<<pi<<endl;
    ans=((a*a)/2)*(pi/180*b-sin(b*pi/180));
    cout<<setprecision(6)<<fixed<<ans<<endl;
 }
return 0;
}
