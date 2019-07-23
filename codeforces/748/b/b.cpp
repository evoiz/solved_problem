#include <bits/stdc++.h>
using namespace std;
const int N=200;
set<pair<char,char>> v;
map<char,char>mp;
string a,b;
int main() {
cin>>a>>b;
if(a.length()==1 && a==b){cout<<0<<endl;return 0;}
if(a.length()==1 && a!=b){cout<<1<<endl<<a<<" "<<b<<endl;return 0;}
for(int i=0;i<a.length();i++){
if(mp.find(b[i])!=mp.end() && mp[b[i]]!=a[i]){cout<<-1<<endl;return 0;}
if(mp.find(a[i])!=mp.end() && mp[a[i]]!=b[i]){cout<<-1<<endl;return 0;}
mp[a[i]]=b[i];mp[b[i]]=a[i];
}
for(auto x:mp){
            char key=x.first,val=x.second;
            if(key==val){continue;}
            if(x.first==mp[x.second])
            if(val<key){swap(key,val);}
                {v.insert({key,val});}
}
cout<<v.size()<<endl;
for(auto x:v){
    cout<<x.first<<" "<<x.second<<endl;
}
return 0;
}
