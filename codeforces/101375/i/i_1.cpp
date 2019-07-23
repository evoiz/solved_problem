#include <bits/stdc++.h>
using namespace std;
long long n,a,b,tmp;
int main(){
cin>>n;
while(n--){
    cin>>a>>b;
    if(abs(a-b)<=1){cout<<"Ok"<<endl;continue ;}
    tmp=a+b;
    a=(a+b)/2;
    b=tmp-a;
    cout<<a<<" "<<b<<endl;
}
return 0;
}
