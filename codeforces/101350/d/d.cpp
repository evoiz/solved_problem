#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
long long n,ans,q,m[N],mn=2e9;
int main(){
scanf("%I64d",&q);
 while(q--){
    scanf("%I64d",&n);
    bool ok=1;
    scanf("%I64d",&m[0]);
    for(int i=1;i<n;i++){scanf("%I64d",&m[i]);if(abs(m[i]-m[i-1])%2){ok=0;}}
    (ok?printf("yes\n"):printf("no\n"));
 }
return 0;
}

