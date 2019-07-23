#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10;
int mem[104][104][204][4],a,b,x;
int dp(int aa,int bb,int xx,int last){
if(aa+bb==0){return (xx==x);}
if(mem[aa][bb][xx][last]!=-1){return mem[aa][bb][xx][last];}
int ans=0;
if(aa!=0){ans=max(ans,dp(aa-1,bb,xx+(last==0),1));}
if(bb!=0){ans=max(ans,dp(aa,bb-1,xx+(last==1),0));}
return mem[aa][bb][xx][last]=ans;
}
void path(int aa,int bb,int xx,int last){
if(aa+bb==0){return ;}
int res=dp(aa,bb,xx,last);
if(aa!=0){if(res==dp(aa-1,bb,xx+(last==0),1)){cout<<1;path(aa-1,bb,xx+(last==0),1);return ;}}
if(bb!=0){if(res==dp(aa,bb-1,xx+(last==1),0)){cout<<0;path(aa,bb-1,xx+(last==1),0);return ;}}
}
int main(){
cin>>a>>b>>x;
swap(a,b);
memset(mem,-1,sizeof mem);
int ans=dp(a,b,0,3);
cerr<<ans<<endl;
path(a,b,0,3);
}
/**

5 6 4
******
*..*.*
******
*....*
******
2 2
2 3
2 5
4 3

**/
