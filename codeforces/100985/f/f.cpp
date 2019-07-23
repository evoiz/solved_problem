#include<bits/stdc++.h>
#define f first
using namespace std;
long long a,b,c;
int main(){
cin>>a>>b>>c;
long long n=((70*a)/100)+(70*a%100!=0)-c;
n=max(n,(long long )0);
///cout<<n<<endl;
if(n>(a-b)){cout<<-1<<endl;}
else{cout<<n<<endl;}
n=c+(a-b);
///cout<<n<<endl;
n=(n*100)/(a);
cout<<n<<endl;
return 0;
}
