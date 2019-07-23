#include<bits/stdc++.h>
using namespace std;
const int N=2e4+3;
int mm[N],ans,mn=1e5,n,m,k,tmp;
bool ok=1;
int main(){
cin>>n>>m>>k;
for(int i=0;i<m*n;i++){
    cin>>mm[i];
    mn=min(mn,mm[i]);
 }
 for(int i=0;i<n*m;i++){
   ok=ok&&(!((mm[i]-mn)%k));
   mm[i]-=mn;mm[i]/=k;
 }
 if(!ok){cout<<-1<<endl;return 0;}
sort(mm,mm+(n*m));
tmp=mm[(n*m)/2];
////cout<<tmp<<endl;
for(int i=0;i<(n*m);i++){ans+=abs(mm[i]-tmp);}
cout<<ans<<endl;
}
/**
j>>i+2....n
i>>n-2;
1 2 3 0 3
1 3 6 6 9
i=3 j=5;
(1)=sum[i];
(2)=sum[j-1]-sum[i];
(3)=sum[n]-sum[j-1];
**/
