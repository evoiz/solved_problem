#include <bits/stdc++.h>
using namespace std;
int main() {
   /////while(true){
    string s;
    cin>>s;
    int ans=0,co;
    for(int j=0;j<s.length()-1;j++){if(s[j]=='V'&&s[j+1]=='K'){ans++;}}
    for(int i=0;i<s.length();i++){
    co=0;
    if(s[i]=='K'){s[i]='V';}
    else{s[i]='K';}
    for(int j=0;j<s.length()-1;j++){if(s[j]=='V'&&s[j+1]=='K'){co++;}}
    ans=max(ans,co);
    if(s[i]=='V'){s[i]='K';continue;}
    if(s[i]=='K'){s[i]='V';continue;}
    }
        cout<<ans<<endl;
   //////////////////////// }
  return 0;
}
