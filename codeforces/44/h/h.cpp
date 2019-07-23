#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const ll N=1e5+10; ll oo=1e10+10;
ll mem[50][11],n,ans;
string s;
ll dp(int in,int last){
if(in==n){return 1ll;}
if(mem[in][last]!=-1){return mem[in][last];}
ll tmp=s[in]-'0'+last;
ll ans=dp(in+1,tmp/2);
if(tmp%2){ans+=dp(in+1,(tmp+1)/2);}
return mem[in][last]=ans;
}
int main(){
memset(mem,-1,sizeof mem);
cin>>s;n=s.length();
for(int i=0;i<10;i++){ans+=dp(1,i);}

ans-=1ll;
for(int i=1;i<n;i++){if(abs(s[i]-s[i-1])>1){ans+=1ll;break;}}
cout<<ans<<endl;
}
/**
4 2
4 5 9 7
1 2 11 33

**/
