#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
long long t,a,b,c;
int main(){
scanf("%I64d",&t);
while(t--){
scanf("%I64d%I64d%I64d",&a,&b,&c);
if(a<b && a<c){cout<<"First"<<endl;continue;}
if(b<a && b<c){cout<<"Second"<<endl;continue;}
cout<<"Third"<<endl;
}
    return 0;
}