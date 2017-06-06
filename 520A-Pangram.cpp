#include <bits/stdc++.h>
using namespace std;
int m[26];
int main()
{
int n;cin >>n;
string s;cin>>s;
for(int i=0;i<s.length();i++){if(s[i]>='A'&&s[i]<='Z'){s[i]+=32;}}
for(int i=0;i<s.length();i++){m[s[i]-'a']++;}
bool ok=1;
for(int i=0;i<26;i++){if(!(m[i])){ok=0;}}
(ok?cout<<"YES"<<endl:cout<<"NO"<<endl);
}
