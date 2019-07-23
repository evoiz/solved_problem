/** dp coin change **/
#include <bits/stdc++.h>
using namespace std;
const long long  Mod=(1e9)+7;
string s,cnst="heidi";
int mem[1002][5];

int LCS(int i,int j){
if( i==s.length() || j==5 )return 0;
if( mem[i][j]!=-1 )return mem[i][j];
int ans=0;
if(s[i]==cnst[j])
  ans=max( ans , 1+LCS(i+1,j+1) );
else{
ans=max( ans, LCS(i+1,j) );
ans=max( ans, LCS(i,j+1) );
}
return mem[i][j]=ans;
}
int main() {
    memset(mem,-1,sizeof mem);
cin>>s;
if(LCS(0,0)==5 && s.length()>5){cout<<"YES"<<endl;return 0;}
cout<<"NO"<<endl;
	return 0;
}
