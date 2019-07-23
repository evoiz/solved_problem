#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
long long n,k,tmp,sum;
int main(){
cin>>n>>k;
for(int i=0;i<n;i++){cin>>tmp;sum+=tmp;}
tmp=(k*10)-5;
double ans=(n*(k-0.5))-sum;
ans=ans*2;
(ans<0? ans=0:ans=ans);
cout<<(long long)ans<<endl;
}