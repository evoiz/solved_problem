#include<bits/stdc++.h>
#define f first
using namespace std;
string s;
bool ok=1;
int a,b;
int main(){
cin>>s;
int n=s.length();
for(int i=0;i<n;i++){
    a+=(s[i]=='A');
    b+=(s[i]=='B');
    ok=ok&&(a-b>=0);
}
ok=ok&&(a-b==0);
if(ok){cout<<"Sim"<<endl;return 0;}
cout<<"Nao"<<endl;
return 0;
}
