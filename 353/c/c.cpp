#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10,oo=1e9+7,mod=1e9+7;
ll a[N],n,mem[N][3];
char s[N];
int main(){
//memset(mem,-1,sizeof mem);
scanf("%lld",&n);
for(int i=0;i<n;i++){scanf("%lld",a+i);}
scanf("%s",s);
reverse(s,s+n);
reverse(a,a+n);
for(int i=n-1;i>=0;i--){
if(s[i]=='1'){mem[i][1]=max(mem[i+1][0],a[i]+mem[i+1][1]);}
else{mem[i][1]=mem[i+1][1];}
if(s[i]=='1'){mem[i][0]=max(mem[i+1][0],a[i]+mem[i+1][0]);}
else{mem[i][0]=max(mem[i+1][0],a[i]+mem[i+1][0]);}
}
ll ans=mem[0][1];
cout<<ans<<endl;
}
