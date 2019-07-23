#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
long long n,tmp=1,ans,m[100];
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>m[i];}
sort(m,m+n,greater<long long>());
for(int i=0;i<n;i++){
    tmp*=m[i];
    ans+=tmp;
 }
 cout<<1+ans<<endl;
}
