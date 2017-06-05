#include<bits/stdc++.h>
using namespace std;
int t_int(string in){
    int ans=0;
for(int i=0;i<in.length();i++){ans=(ans*10)+in[i]-'0';}
return ans;
}
int main()
{
long long n,mx,nn,co=0;
cin>>n;
nn=n;
mx=nn%10;
while(nn){
    mx=max(mx,nn%10);
    nn/=10;
    co++;
}
cout<<mx<<endl;
string m[mx];
while(n){
   int tmp=n%10;
   for(int i=0;i<mx;i++){if(i<tmp){m[i]='1'+m[i];}else{ m[i]='0'+m[i];}}
   n/=10;
}
for(auto x:m){cout<<t_int(x)<<" ";}
cout<<endl;
return 0;
}
