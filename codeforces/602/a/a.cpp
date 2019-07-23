#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
long long td(string in,int n){
long long ans=0;
for(int i=0;i<in.length();i++){
    ans*=n;
    ans+=in[i]-'0';
}
return ans;
}
string tb(long long in ,int n){
string ans="";
while(in){
    ans+=(in%n)+'0';
    in/=n;
}
    reverse(ans.begin(),ans.end());
    return ans;
}
ll n,base,tmp;
char ch;
string ss;
int main(){
scanf("%lld%lld",&n,&base);
for(int i=0;i<n;i++){scanf("%lld",&tmp);ch='0'+tmp;ss+=ch;}
ll x=td(ss,base);
ss="";
scanf("%lld%lld",&n,&base);
for(int i=0;i<n;i++){scanf("%lld",&tmp);ch='0'+tmp;ss+=ch;}
ll y=td(ss,base);
if(x==y){printf("=\n");return 0;}
if(x<y){printf("<\n");return 0;}
printf(">\n");
}
