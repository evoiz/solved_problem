#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
string s;
map<char,int>mp;
int tmp,n;
int main(){
cin>>n>>s;
for(auto x:s){mp[x]++;}
tmp=max(mp['A'],max(mp['G'],max(mp['C'],mp['T'])));
tmp=abs(tmp-mp['A'])+abs(tmp-mp['G'])+abs(tmp-mp['C'])+abs(tmp-mp['T']);
if((mp['?']-tmp)%4|| tmp>mp['?']){cout<<"==="<<endl;return 0;}
for(int i=0;i<n;i++){
    if(s[i]=='?'){
        tmp=min(mp['A'],min(mp['G'],min(mp['C'],mp['T'])));
        for(auto x:mp){
                if(x.f=='?'){continue;}
                if(x.s==tmp){s[i]=x.f;mp[x.f]++;break;}
        }
    }
}
cout<<s<<endl;
}
