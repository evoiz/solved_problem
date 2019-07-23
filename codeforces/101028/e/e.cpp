#include <bits/stdc++.h>
using namespace std;
int t,n,tmp,m[1005];
int ans;
int main(){
scanf("%d",&t);
while(t--){
cin>>n;
cin>>m[0];ans=m[0];
for(int i=1;i<n;i++){cin>>m[i];ans=__gcd(ans,m[i]);}
cout<<ans<<" ";
tmp=0;
for(int i=0;i<n;i++){tmp+=m[i]/ans;}
cout<<tmp<<endl;
}
    return 0;
}
