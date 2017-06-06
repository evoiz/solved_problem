#include <bits/stdc++.h>
using namespace std;
int main(){
long long x,tmp,dg=0,last,pw=1;
cin>>x;
tmp=x;
while(tmp){
    tmp/=10;
    dg++;
}
for(long long i=1;i<dg;i++,pw*=10);
last=x/pw;
cout<<((last+1)*pw)-x<<endl;
return 0;
}
