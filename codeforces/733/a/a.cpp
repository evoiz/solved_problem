#include <bits/stdc++.h>

using namespace std;
string s;
bool ch(char in){
if(in=='A'||in=='E'||in=='I'||in=='O'||in=='U'||in=='Y')return 1;
return 0;
}
int fin(int in){
int co=0;
for(int i=in;i<s.length();i++){
if(ch(s[i])==1){
break;}
co++;}
return co++;
}
int main(){
cin>>s;
int mx=fin(0)+1;
for(int i=0;i<s.length();i++){
if(ch(s[i])==1){
int ts=fin(i+1)+1;
if(ts>mx){mx=ts;}
}
}
if(mx!=0){cout<<mx<<endl;}
else{cout<<s.length()+1<<endl;}
return 0;
}