#include <bits/stdc++.h>
using namespace std;
map< double , int> mp;
string s;
int fid(){
for( int i=0;i<s.length();i++){
if(s[i]=='^'){return i;}
}
}
long long r,l;
int main(){
cin>>s;
int w=fid();
for(int i=0;i<w;i++){
 if(s[i]!='='){l+=(s[i]-'0')*(abs(w-i));}
}
for(int i=w;i<s.length();i++){
 if(s[i]!='='){r+=(s[i]-'0')*(abs(w-i));}
}
//cout<<r<<" "<<l<<endl;
if(r>l){cout<<"right"<<endl;return 0;}
if(r<l){cout<<"left"<<endl;return 0;}
cout<<"balance"<<endl;
}
