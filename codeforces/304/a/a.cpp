#include <bits/stdc++.h>
using namespace std;
long long ans,n;
bool is(long long x){
//if(x>n){return 0;}
long long tmp=sqrt(x);
if (tmp*tmp==x&& tmp<=n){return 1;}
return 0;
}
int main(){
scanf("%I64d",&n);
for(long long i=1;i<=n;i++){
    for(long long j=i+1;j<=n;j++){
        ans+=is(((i*i)+(j*j)));
    }
}
cout<<ans<<endl;
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
