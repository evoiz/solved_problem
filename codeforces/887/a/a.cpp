#include <bits/stdc++.h>

using namespace std;
string s;
bool ok=1;
int main(){
cin>>s;
for(auto x:s){
    ok=ok&&(x=='0');
}
if(ok){cout<<"no\n";return 0;}
for(int i=0;i<s.length();i++){
 if(s[i]=='1'){
   for(int j=i+1,c=0;j<s.length();j++){
    c+=(s[j]=='0');
    if(c==6){cout<<"yes\n";return 0;}
   }
 cout<<"no\n";
 return 0;
 }
}
return 0;
}
/**
**/
