#include <bits/stdc++.h>
#define s second
#define f first
using namespace std;
long long  n,co;
const int N=1e7+3;
bool pr[N];
int main(){
cin>>n;
for(int i=2;i<=1e7 && co<n;i++){
    if(!pr[i]){
            cout<<i<<" ";
    co++;
       for (long long j=i*2;j<=1e7;j+=i){pr[j]=1;}
     }
   }

}