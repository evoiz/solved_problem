#include <bits/stdc++.h>
using namespace std;
map< double , int> mp;
long long n,x,y,tx,ty,ans;
double mail;
int main(){
cin>>n>>x>>y;
while(n--){
  cin>>tx>>ty;
   if(ty-y==0){ans=1;continue;}
    mail=(double)(tx-x)/(ty-y);
    mp[mail]++;
}
cout<<ans+mp.size()<<endl;
}
