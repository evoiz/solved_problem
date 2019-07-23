#include <bits/stdc++.h>
using namespace std;
long long n,a,b;
string s;
map<char,int> mp;
bool ok;
int main(){
scanf("%I64d",&n);
while(n--){
b=0;
ok=1;
string ans;
mp.clear();
cin>>s;
for(auto x:s){mp[x]++;}
for(auto x:mp){
       if(x.second%2==1){b++;continue;}
}
if(b>1){ok=0;}
if(!ok){cout<<"impossible\n";continue;}
for(auto x:mp){
      ///  cout<<x.first<<" "<<ceil(x.second/2)<<endl;
        for(int i=0;i<(x.second/2);i++){ans+=x.first;}
}
for(auto x:mp){if(x.second%2==1){ans+=x.first;}}
///cout<<b<<" "<<ans<<" ";
if(b==1){for(int i=ans.length()-2;i>=0;i--){ans+=ans[i];}cout<<ans<<endl;continue;}
cout<<ans;
reverse(ans.begin(),ans.end());
cout<<ans<<endl;
}
return 0;
}
