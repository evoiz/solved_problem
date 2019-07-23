#include <bits/stdc++.h>
using namespace std;
bool pr[10000000];
set<long long>v;
int main(){
long long n,co=0;
 cin>>n;
 for(long long  i=2;i<=n;i++){
       if(!pr[i]){
            v.insert(i);
       for(long long k=i;k<=n;k*=i){
        v.insert(k);
       }
       for (long long j=i*2;j<=n;j+=i){pr[j]=1;}
     }
   }
   cout<<v.size()<<endl;
   for(auto x:v){
    cout<<x<<" ";
   }
   cout<<endl;
return 0;
}