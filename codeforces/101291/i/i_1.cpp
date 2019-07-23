#include <bits/stdc++.h>
using namespace std ;
long long m[10000];
int main(){
long long sum=0,mx=0,n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>m[i];
    if(m[i]>mx){mx=m[i];}
    sum+=m[i];
}
if(sum>=2*mx){cout<<sum/2<<endl;return 0;}
cout<<sum-mx<<endl;
}