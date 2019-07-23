#include <bits/stdc++.h>
using namespace std;
string s,tmp;
bool ok(){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.size()-1-i]){return 0;}
    }
    return 1;
}
int main(){
cin>>s;
if(s=="0"){cout<<"YES"<<endl;return 0;}
while(s[s.size()-1]=='0'){tmp=s.substr(0,s.size()-1);s=tmp;}
cout<<(ok()?"YES":"NO")<<endl;
return 0;
}
