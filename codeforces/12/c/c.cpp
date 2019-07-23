#include <bits/stdc++.h>
using namespace std;
long long  m[105],n,t,mx,mn;
map<string,long long> mp;
vector<long long> res;
string tmp;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
cin>>n>>t;
for(int i=0;i<n;i++){cin>>m[i];}
sort(m,m+n);
while(t--){cin>>tmp;mp[tmp]++;}
for(auto x:mp){res.push_back(x.second);}
sort(res.begin(),res.end(),greater<int>());
for(int i=0;i<res.size();i++){mn+=res[i]*m[i];}
sort(m,m+n,greater<int>());
for(int i=0;i<res.size();i++){mx+=res[i]*m[i];}
cout<<mn<<" "<<mx<<endl;
}
