#include <bits/stdc++.h>
using namespace std;
long long a,b;
long long ans(long long x,long long y){
if(x==y){return 1;}
long long mx=max(x,y);long long mn=min(x,y);
return mx/mn+(mx%mn?ans(mn,mx%mn):0);
}
int main(){
cin>>a>>b;
cout<<ans(a,b)<<endl;
return 0;
}
/**
5 3 4
mars
mars
mars
elias
bittar
**/
