#include <bits/stdc++.h>
using namespace std;
int main(){
long double n,t,angel;
 cin>>t;
 while(t--){
     cin>>n;
   for(long double i=3;i<=1000;i++){
        angel=(((i-2)*180)/(i));
        if(angel>n){cout<<"NO"<<endl;break;}
        if(angel==n){cout<<"YES"<<endl;break;}
 }
 }
return 0;
}
