#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
long long n,k;
int main(){
cin>>n>>k;
if(k>n ||(n>1 && k==1)){cout<<-1<<endl;return 0;}
string ans="";
for(int i=2;i<k;i++){char c=i+'a';ans=ans+c;}
for(int i=0;i<n-ans.length();i++){
    if(i%2){cout<<'b';}
    else{cout<<'a';}
}
cout<<ans<<endl;
}
