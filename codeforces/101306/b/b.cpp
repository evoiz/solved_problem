#include <bits/stdc++.h>
using namespace std;
int n,a,b,ans,mars,els;
string s;
void con(){
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z'){s[i]+=32;}
    }
}
int main(){
cin.sync_with_stdio(0);
cin.sync_with_stdio(0);
cout.tie(0);
cout.tie(0);
cin>>n>>a>>b;
while(n--){
    cin>>s;
    con();
    (s=="mars"?mars++:els++);
}
if(els<b){ans+=abs(els-b);}
else{mars+=abs(b-els);}
if(mars<a){ans+=abs(a-mars);}
cout<<ans<<endl;
return 0;
}
/**
5 3 4
mars
mars
mars
elias
bittar
**/
