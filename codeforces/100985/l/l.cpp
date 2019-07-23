#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N=1e5+5;
long long ans,n,m[N],tmp,mx;
int main(){
scanf("%I64d",&n);
for(int i=0;i<n;i++){scanf("%I64d",&m[i]);mx=max(mx,m[i]);}
for(int i=0;i<n;i++){tmp+=(m[i]==mx);if(m[i]==mx) ans=i;}
if(tmp>1){cout<<-1<<endl;return 0;}
cout<<ans+1<<endl;

return 0;
}
