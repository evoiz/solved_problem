#include <bits/stdc++.h>
using namespace std;
string a,b,c;
map<char,char>mp;
int main() {
cin>>a>>b>>c;
for(int i=0;i<a.length();i++){a[i]+=32*(a[i]>='A'&&a[i]<='Z');b[i]+=32*(b[i]>='A' && b[i]<='Z');mp[a[i]]=b[i];}
/*for(auto x:mp){
    cout<<x.first<<" "<<x.second<<endl;
}*/
for(auto x:c){
    if(x>='A'&&x<='Z'){char s=mp[x+32]-32;cout<<s;continue;}
    if(x>='a'&&x<='z'){cout<<mp[x];continue;}
    cout<<x;
}
cout<<endl;
return 0;
}
/**
**/
