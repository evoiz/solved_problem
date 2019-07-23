#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> mp;
int n,xx,yy,ans=0;
int main() {
    cin>>n;
while(n--){cin>>xx>>yy;mp.push_back({xx,yy});}
for(int i=0;i<mp.size();i++){
    bool  u=0,d=0,l=0,r=0;
    for(int j=0;j<mp.size();j++){
         u=u||(mp[i].first==mp[j].first&&mp[i].second<mp[j].second);
         d=d||(mp[i].first==mp[j].first&&mp[i].second>mp[j].second);
         r=r||(mp[i].first<mp[j].first&&mp[i].second==mp[j].second);
         l=l||(mp[i].first>mp[j].first&&mp[i].second==mp[j].second);
         if(l&&r&&u&&d){ans++;break;}
        }
    }
    cout<<ans<<endl;
}
/**

 upper=0;lower=0;left=0;right=0;
    for(int j=0;j<n;j++){
    if()upper=1;
    if(p[i].first==p[j].first&&p[i].second>p[j].second)lower=1;
    if(p[i].first<p[j].first&&p[i].second==p[j].second)right=1;
    if(p[i].first>p[j].first&&p[i].second==p[j].second)left=1;
    if(lower&&upper&&right&&left){c++;break;}
        }

**/
