#include <bits/stdc++.h>

using namespace std;
string s;
int ans=1e6+7,oo=1e7+10;
int main(){
    cin>>s;
    for(int i=0; i<26; i++){
        char c = 'a' + i;
        int tmp=-1,emp=-oo;
         for(int j=0; j<s.length(); j++){
            if(s[j]==c){emp=max(emp,(j-tmp));tmp=j;}
        }
        emp=max(emp,(int)(s.length())-tmp);
        ans = min(ans,emp);
    }
    printf("%d",ans);
}
