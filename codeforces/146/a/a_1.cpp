#include <bits/stdc++.h>
using namespace std;
string s;
bool ok(){
for(auto x:s){if(x!='7' && x!='4'){return 0;}}
return 1;
}
bool half(){
long long ans=0,i=0,sum=0;;
for(;i<s.size()/2;i++){sum+=s[i]-'0';}
for(;i<s.size();i++){sum-=s[i]-'0';}
if(sum)return 0; return 1;
}
int main(){
    int n;
    cin>>n;
cin>>s;
(ok() && half()?cout<<"YES"<<endl:cout<<"NO"<<endl);
    return 0;
}
/*

*/
