/**math**/
#include <bits/stdc++.h>
using namespace std;
int t;
bool ok(){
int delta=1+(8*t);
int s=sqrt(delta);
if(s*s!=delta){return 0;}
if((1+s)%2){return 0;}
return 1;
}
int main(){
cin>>t;
cout<<(ok()?"YES":"NO")<<endl;
}
/**
n2+n-2t=0;
delta=1+8t==>sqrt9=3;
x1=
4+2-6=0
t=3;
dleta=1+8t=25==>s=5;
**/
