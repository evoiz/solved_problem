#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=2e3,oo=1e9+7,mod=1e9+7;
string s;
ll ans;
int main(){
cin>>s;
if(s=="1"){cout<<0<<endl;return 0;}
reverse(s.begin(),s.end());
int i=0;
int n=s.length();
s=s+'0';
while(i<n){
    if(i==n-1 && s[i]=='1'){break; }
    if(s[i]=='0'){ans++;i++;continue; }
    if(s[i]=='1'){
        ans++;
        while(s[i]!='0' && i<s.length()-1){
            ans++;
            i++;
        }
        s[i]='1';
        //cerr<<i<<endl;
    }
}
cout<<ans<<endl;
}
/**
101110
011101
1+6+1+2+1
**/
