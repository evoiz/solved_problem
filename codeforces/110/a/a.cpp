#include <iostream>
using namespace std;
bool sol(long long in){
while(in){
if(in%10!=7 && in%10!=4){return 0;cout<<in<<endl;}
in/=10;
}
return 1;
}

int main(){
    string s;cin>>s;
    long long ans=0;
    for(long long i=0;i<s.size();i++){
        if(s[i]=='7' || s[i]=='4'){ans++;}
    }
   /// cout<<ans<<endl;
    ///cout<<sol(70)<<endl;
    if(sol(ans)&& ans){cout<<"YES"<<endl;return 0;}
    cout<<"NO"<<endl;
    return 0;
}