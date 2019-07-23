#include <bits/stdc++.h>
#define s second
#define f first
using namespace std;
int n,mx,tmp;
map<string,int>mp,mp2;
pair<string ,int> pr[1003];
string s,ans;
int main(){
scanf("%d",&n);
 for(int i=0;i<n;i++){
    cin>>pr[i].f>>pr[i].s;
    mp[pr[i].f]+=pr[i].s;
    }
 for(auto x:mp){mx=max(mx,x.second);}
for(int i=0;i<n;i++){
    mp2[pr[i].f]+=pr[i].s;
    if(mp2[pr[i].f]>=mx && mp[pr[i].f]>=mx){cout<<pr[i].f<<endl;return 0;}
}
        return 0;
}