#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
const int N=2e3+3;
long long a,b,t;
void solve(long long a,long long b){
if((a%2==0 && b%2 )||(9*a)<b || (a>1 && b<2)){printf("-1\n");return;}
if(a==1 && b<=9){printf("%I64d\n",b);return ;}
if(a%2 && b%2){
string ans="";
long long sum=b/2;
for(int i=0;i<a/2;i++){ans+=min(sum,(long long)9)+'0';sum-=min(sum,(long long)9);}
int x=((sum)*2)+1;
cout<<ans<<x;reverse(ans.begin(),ans.end());cout<<ans<<endl;return;
}
if(a%2 && b%2==0){
string ans="";
long long sum=(b/2);
for(int i=0;i<a/2;i++){ans+=min(sum,(long long)9)+'0';sum-=min(sum,(long long)9);}
cout<<ans<<(sum*2);reverse(ans.begin(),ans.end());cout<<ans<<endl;return;
}
string ans="";
long long sum=b/2;
for(int i=0;i<a/2;i++){ans+=min(sum,(long long)9)+'0';sum-=min(sum,(long long)9);}
cout<<ans;reverse(ans.begin(),ans.end());cout<<ans<<endl;
}
int main(){
scanf("%I64d",&t);
while(t--){
scanf("%I64d%I64d",&a,&b);
///for(long long a=1;a<=10;a++)
///for(long long b=1;b<=100;b++){
       ///// cout<<a<<" "<<b<<"\t";
       solve(a,b);
///}
}
    return 0;
}
