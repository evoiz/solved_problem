#include <iostream>
using namespace std;
int main(){
int a=0,d=0,n;
cin>>n;
char m[n];
cin>>m;
for (int i=0;i<n;i++){
if (m[i]=='A'){a++;}
if (m[i]=='D'){d++;}
}
if(d>a)
{cout<<"Danik"<<endl;}
if(a>d)
{cout<<"Anton"<<endl;}
if(a==d)
cout<<"Friendship"<<endl;
////cout<<d<<a;
return 0;
}