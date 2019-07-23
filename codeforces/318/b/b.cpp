#include <bits/stdc++.h>

using namespace std;


int main()
{
  long long ans=0,tmp=0;
  string s;
  cin>>s;
  for(long long  i=0;i<s.length();i++){
    if(s[i]=='h'&& s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='v'&&s[i+4]=='y'){tmp++;}
    if(s[i]=='m'&&s[i+1]=='e'&&s[i+2]=='t'&&s[i+3]=='a'&&s[i+4]=='l'){ans+=tmp;}
  }
  cout<<ans<<endl;
    return 0;
}