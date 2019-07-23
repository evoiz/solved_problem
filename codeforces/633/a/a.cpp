#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
int n,a,b,sum;
int main(){
cin>>a>>b>>n;
sum=a+b;
if(n%a==0 || n%b==0){cout<<"Yes"<<endl;return 0;}
for(;sum<=n;sum+=a+b){
    ///cout<<sum<<" "<<(n-sum)%a<<" "<<(n-sum)%b<<endl;
    if((n-sum)%a==0 || (n-sum)%b==0){cout<<"Yes"<<endl;return 0;}
}
cout<<"No"<<endl;
}
/*
(7*11)+(7*34)+(2*34)

*/
