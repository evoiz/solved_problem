#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
long long m[N],n,sum[N],tmp;
map<long long ,int> pre,sufx;
int main(){
scanf("%I64d",&n);
for(int i=0;i<n;i++){
   scanf("%I64d",&m[i]);
   tmp+=m[i];
   sum[i]=tmp;
   sufx[m[i]]++;
 }
 if(tmp%2){cout<<"NO"<<endl;return 0;}
 bool ok=0;
 for(int i=0;i<n;i++){
    if(sum[i]==tmp/2){ok=1;}
    sufx[m[i]]--;
    pre[m[i]]++;
    if(sum[i]<tmp/2){ok=ok||(sufx[((tmp/2)-sum[i])]!=0);}
    if(sum[i]>tmp/2){ok=ok||(pre[(sum[i]-(tmp/2))]!=0);}
    if(ok){cout<<"YES"<<endl;return 0;}
 }
 cout<<"NO"<<endl;
}
/**
#include <bits/stdc++.h>
using namespace std;
const int N=25;
long long mem[N][N];
long long dp(int x,int y){
if(x==0 || y==0){return 1;}
if(mem[x][y]!=-1){return mem[x][y];}
long long ans=dp(x-1,y)+dp(x,y-1);
return mem[x][y]=ans;
}
int t,x,y;
int main(){
memset(mem,-1,sizeof mem);
cin>>t;
while(t--){
    cin>>x>>y;
    cout<<dp(x,y)<<endl;
}
}
**/
