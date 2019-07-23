#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
using namespace std;
string s,tmp;
int n;
void ch(){
bool ok=0;
int sum=0;
for(auto x:tmp){
        if(x=='.'){ok=1;continue;}
        if(!ok){continue;}
        if(ok){sum+=x-'0';}
}
if(sum){cout<<tmp<<endl;exit(0);}
for(int i=0;tmp[i]!='.'&&i<tmp.length();i++){cout<<tmp[i];}
cout<<endl;
exit(0);
}
int main(){
cin>>s;
bool ok=0;
for(auto x:s){
        if(x=='e'){ok=1;continue;}
        if(!ok)tmp+=x;
        if(ok){n*=10;n+=x-'0';}
}
if(!n){ch();return 0;}
//cout<<tmp<<" "<<n;
ok=0;
for(int i=0;i<tmp.length()-1;i++){
    if(tmp[i]=='.'){ok=1;}
    if(!ok){continue;}
    swap(tmp[i],tmp[i+1]);
    n--;
    if(!n){break ;}
}
if(n){tmp=tmp.substr(0,tmp.length()-1);for(int i=0;i<n;i++){tmp+='0';}}
if(tmp[tmp.length()-1]=='.'){tmp=tmp.substr(0,tmp.length()-1);}
ch();
    return 0;
}
