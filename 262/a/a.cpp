#include<bits/stdc++.h>
using namespace std;
string s;
int n,k,ans;
bool lc(string x){
    int tmp=0;
    for(auto c:x){tmp+=(c=='7'||c=='4');}
return tmp<=k;
}
int main() {
    cin>>n>>k;
while(n--){cin>>s;ans+=lc(s);}
    cout<<ans<<endl;
}
/**

**/
