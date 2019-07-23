#include <bits/stdc++.h>
using namespace std;
int main() {
    ////while(true){
    string s1,s2,ans="";
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        if(s2[i]>s1[i]){cout<<-1<<endl;return 0;}
        if(s2[i]==s1[i]){ans+=s1[i];}
        if(s2[i]<s1[i]){ans+=s2[i];}
    }
        cout<<ans<<endl;
    /////}
  return 0;
}
