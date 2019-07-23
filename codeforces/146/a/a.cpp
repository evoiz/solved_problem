#include <bits/stdc++.h>
using namespace std;
string s;
bool ok(){
for(auto x:s){if(x!='7' && x!='4'){return 0;}}
return 1;
}
bool half(){
string a=s.substr(0,s.size()/2),b=s.substr(s.size()/2,s.size());
sort(a.begin(),a.end());
sort(b.begin(),b.end());
if(a==b)return 1; return 0;
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
