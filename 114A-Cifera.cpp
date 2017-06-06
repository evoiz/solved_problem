#include <bits/stdc++.h>
using namespace std;
int main(){
long long n,k,co=0;
 cin>>n>>k;
       for(long long i=n;i<=k;i*=n){
        if(i==k){cout<<"YES"<<endl<<co<<endl;return 0;}
        co++;
       }
   cout<<"NO"<<endl;
return 0;
}
