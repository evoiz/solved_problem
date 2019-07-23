#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e4+10,mod=7901;
int fr[5];
string s,ss;
int main(){
cin>>s;
ss=s;sort(ss.begin(),ss.end());
for(int i=0;i<s.length();i++){fr[s[i]-'a']++;}
cerr<<fr[0]<<" "<<fr[1]<<" "<<fr[2]<<endl;
if((fr[2]==fr[0] || fr[1]==fr[2])&&(fr[0] && fr[1])&&(s==ss)){cout<<"YES"<<endl;return 0;}
cout<<"NO"<<endl;
}
/**
f(t)=((p-l)
**/
