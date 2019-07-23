#include <bits/stdc++.h>
#define s second
#define f first
using namespace std;
long long a,b,c;
int main(){
cin>>a>>b>>c;
if(a==b){cout<<"YES"<<endl;return 0;}
else if(!c){cout<<"NO"<<endl;return 0;}
if(a>b && c<0 &&abs(a-b)%abs(c)==0){cout<<"YES"<<endl;return 0;}
if(a<b && c>0 && abs(a-b)%abs(c)==0){cout<<"YES"<<endl;return 0;}
cout<<"NO"<<endl;
}
