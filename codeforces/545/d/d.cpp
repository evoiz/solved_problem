#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const long long N=1e5+9;
long long n,m[N],ans,sum;
int main(){
scanf("%I64d",&n);
for(long long i=0;i<n;i++){
    scanf("%I64d",&m[i]);
}
sort(m,m+n);
for(long long i=0;i<n;i++){
if(sum<=m[i]){ans++;sum+=m[i];}
}
cout<<ans<<endl;
}