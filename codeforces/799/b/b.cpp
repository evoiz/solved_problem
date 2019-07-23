#include<bits/stdc++.h>
using namespace std;
const int N=2e6+3;
pair<int,pair<int,int>>m[N];
set<pair<int,int>>st[5];
int n,k,tmp;
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){scanf("%d",&m[i].first);}
for(int i=0;i<n;i++){scanf("%d",&m[i].second.first);}
for(int i=0;i<n;i++){scanf("%d",&m[i].second.second);}
for(int i=0;i<n;i++){
st[m[i].second.first].insert({m[i].first,m[i].second.second});
st[m[i].second.second].insert({m[i].first,m[i].second.first});
}
scanf("%d",&k);
while(k--){
    scanf("%d",&tmp);
    if(st[tmp].size()){
        for(auto x:st[tmp]){
            cout<<x.first<<" ";
            st[tmp].erase(x);
            st[x.second].erase({x.first,tmp});
            break;
        }
    }
    else{cout<<-1<<" ";}
 }
 cout<<endl;
}
/**
j>>i+2....n
i>>n-2;
1 2 3 0 3
1 3 6 6 9
i=3 j=5;
(1)=sum[i];
(2)=sum[j-1]-sum[i];
(3)=sum[n]-sum[j-1];
**/
