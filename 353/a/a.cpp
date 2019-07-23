#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
pair<long long ,long long> m[N];
long long sum1,sum2,n;
int main(){
scanf("%I64d",&n);
for(int i=0;i<n;i++){
   scanf("%I64d%I64d",&m[i].first,&m[i].second);
   sum1+=m[i].first;
   sum2+=m[i].second;
 }
if(sum1%2==0 && sum2%2==0){cout<<0<<endl;return 0;}
for(int i=0;i<n;i++){
bool ok=((sum1-m[i].first+m[i].second)%2)||((sum2+m[i].first-m[i].second)%2);
 if(!ok){cout<<1<<endl;return 0;}
 }
 cout<<-1<<endl;
}
/**
1 1 1 1 1
1 2 3 4 5
1 3 6 10 15
1 4 10 15
1
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
