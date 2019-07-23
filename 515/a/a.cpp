#include <bits/stdc++.h>

using namespace std;
int main(){
long long x,y,c,a;
cin>>x>>y>>c;
a=abs(x)+abs(y);
if(a>c){cout<<"NO\n";}
if(a==c){cout<<"YES\n";}
if(a<c){
if((c-a)%2==0){cout<<"YES\n";}
else{cout<<"NO\n";}
}
return 0;
}