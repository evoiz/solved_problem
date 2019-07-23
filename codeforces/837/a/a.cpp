#include<bits/stdc++.h>
using namespace std;
long long ans,tmp;
string s,ss;
long long ch(string x){
long long t=0;
for(auto c:x){t+=(c>='A' && c<='Z');}
return t;
}
int main(){
cin>>tmp;
while(cin>>ss){ans=max(ans,ch(ss));}
cout<<ans<<endl;
}
/**

**/
