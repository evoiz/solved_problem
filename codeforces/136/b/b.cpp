#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e3-200,oo=1e9+10;
int a,b;
string aa,bb,cc;
string to(int x){
string ans="";
while(x){
char c=(x%3)+'0';
ans=ans+c;
x/=3;
}
//reverse(ans.begin(),ans.end());
return ans;
}
int from(string x){
int ans=0;
for(int i=0;i<x.length();i++){
ans*=3;
ans+=(x[i]-'0');
}
return ans;
}
int mod_(int x,int mod){return ((x%mod)+mod)%mod;}
int main(){
scanf("%d%d",&a,&b);
cerr<<to(a)<<" "<<to(b)<<" "<<from("1021")<<endl;
aa=to(a);bb=to(b);
if(aa.size()<bb.size()){while(aa.size()<bb.size()){aa=aa+"0";}}
else{while(aa.size()>bb.size()){bb=bb+"0";}}
cerr<<aa<<" "<<bb<<endl;
for(int i=0;i<aa.length();i++){
char c= mod_(bb[i]-aa[i],3)+'0';
cc=cc+c;
}
cerr<<cc<<endl;
reverse(cc.begin(),cc.end());
cout<<from(cc)<<endl;
return 0;
}
/**
0112
1212
1021
**/
