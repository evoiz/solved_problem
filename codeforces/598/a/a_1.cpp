#include <bits/stdc++.h>
using namespace std;
int n,t;
long long m[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912};
long long segma(long long x){
return x*(x+1)/2;
}
long long solve(long long x){
int i=0;
while(m[i]<=n){
x-=(2*m[i]);
i++;
}
return x;
}
int main(){
cin>>t;
while(t--){
 cin>>n;
 cout<<solve(segma(n))<<endl;
}

}
/*
2^0+2^1

*/
