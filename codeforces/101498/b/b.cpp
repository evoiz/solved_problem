#include<bits/stdc++.h>
#define f first
using namespace std;
int t,n;
string a,b,tmp;
map<char,int>ch;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
cin>>t;
while(t--){
   cin>>a>>b;
   ch.clear();
   int ans=0;
   for(auto x:b){ch[x]++;}
   for(auto x:a){
     if(ch[x]>0){ans++;ch[x]--;continue;}
     break;
   }
cout<<ans<<endl;
}
return 0;
}