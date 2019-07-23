#include <bits/stdc++.h>
using namespace std ;
long long   m[9999999],n,tmp;
int main(){
cin>>n;
memset(m,-1,sizeof m);
for(long long  i=1;i<n;i++){
        tmp=((i%n)*(i%n))%n;
         m[tmp]=i;
}
m[0]=0;
for(long long i=0;i<n;i++){cout<<m[i]<<" ";}
}