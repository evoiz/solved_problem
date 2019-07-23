#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10,mod=1e9+7;
char in[N];
int n,t;
string s;
string read(){scanf("%s",in);return (string)in;}
bool is(char c){return (c>='A' && c<='Z');}
bool ch(){
int ok=0;
for(int i=0;i<n-1;i++){ok+=(is(s[i])!=is(s[i+1]));}
return(ok==1);
}
void to(){
ll ans=0,i,res=0;
for(i=0;i<n && is(s[i]);i++){ans*=26;ans+=(s[i]-'A'+1);}
for(;i<n;i++){res*=10;res+=(s[i]-'0');}
printf("R%lldC%lld\n",res,ans);
}
void from(){
ll a=0,b=0,i;
for(i=1;i<n && !is(s[i]);i++){a*=10;a+=(s[i]-'0');}i++;
for(;i<n;i++){b*=10;b+=(s[i]-'0');}
string tmp="";
while(b!=0){tmp=((char)((b-1)%26+'A'))+tmp;b--;b/=26;}
printf("%s%lld\n",tmp.c_str(),a);
}
int main(){
cerr<<('R'-'A')<<" "<<('Z'-'A');
scanf("%d",&t);
while(t--){
s=read();n=s.length();
if(ch()){to();continue;}
from();
}
}
/**
2
R23C55
BC23

**/
