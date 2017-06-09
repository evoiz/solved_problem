#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
map<int,vector<int>>mp;
int freq[100000],n,k,tmp;
int main(){
cin>>n>>k;
for(int i=1;i<=k;i++){cin>>tmp;freq[tmp]=1;mp[i].push_back(tmp);}
for(int i=1;i<=k;i++){
        int co=0;
 for(int j=1;j<=n*k && co<n-1;j++){
        if(!(freq[j])){freq[j]=1;co++;mp[i].push_back(j);}}
}

for(auto x:mp){
for(auto y:x.s){cout<<y<<" ";}
cout<<endl;
}

}
