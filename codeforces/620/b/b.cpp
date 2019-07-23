#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
int m[]={6,2,5,5,4,5,6,3,7,6};
long long ch(long long in){
long long ans=0;
while(in){
ans+=m[in%10];
in/=10;
}
return ans;
}
long long ans=0,a,b;
int main(){
    cin>>a>>b;
for(int i=a;i<=b;i++){ans+=ch(i);}
cout<<ans<<endl;
}