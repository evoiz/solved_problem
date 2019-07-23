#include <bits/stdc++.h>

using namespace std;
long long n,tmp,ans;
string s;
int main(){
cin>>n>>s;
if(s=="0"){cout<<0<<endl;return 0;}
for(int i=0;i<n;i++){
if(s[i]=='1'){
tmp=0;
for(int j=i;s[j]!='0' && j<n;j++,i++,tmp++);
  /// cout<<i<<"\t";
ans*=10;
ans+=tmp;
 }
 if(s[i]=='0'){
    for(int j=i;s[j]!='1' && j<n;j++,i++,tmp++){ans*=10;}
    ans/=10;
    i--;
    continue;
  }
 }
 if(s[s.length()-1]=='0'){ans*=10;}
cout<<ans<<endl;
    return 0;
}
