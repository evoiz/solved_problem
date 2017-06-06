#include<bits/stdc++.h>
using namespace std;

int main()
{
///while(1){
int a,b,n;
cin>>a>>b>>n;
bool sem=0;
while(true){
if(!sem){n=n-(__gcd(a,n));if(n<0)break;sem=1;continue;}
n=n-(__gcd(b,n));
if(n<0){break;}
sem=0;
}
cout<<!sem<<endl;
////}
return 0;
}
