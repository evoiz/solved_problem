#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e4+10,mod=7901;
int a,b,c,i;
string s,ss;
int main(){
cin>>s;
ss=s;sort(ss.begin(),ss.end());
while(s[i]=='a'){a++;i++;}
while(s[i]=='b'){b++;i++;}
while(s[i]=='c'){c++;i++;}
cerr<<a<<" "<<b<<" "<<c<<endl;
if((c==a || b==c)&&(s==ss)&& a && b){cout<<"YES"<<endl;return 0;}
cout<<"NO"<<endl;
}
/**
f(t)=((p-l)
**/
