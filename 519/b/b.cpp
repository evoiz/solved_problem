#include <bits/stdc++.h>
using namespace std;
vector<long long>v[3];
long long n,tn,tmp;
int main() {
    scanf("%I64d",&n);
    tn=n;
   while(tn--){
    scanf("%I64d",&tmp);
    v[0].push_back(tmp);
   }
     tn=n-1;
   while(tn--){
    scanf("%I64d",&tmp);
    v[1].push_back(tmp);
   }
   tn=n-2;
   while(tn--){
    scanf("%I64d",&tmp);
    v[2].push_back(tmp);
   }
  sort(v[0].begin(),v[0].end());
  sort(v[1].begin(),v[1].end());
  sort(v[2].begin(),v[2].end());
  for(int i=0;i<n-1;i++){
    if(v[0][i]!=v[1][i]){cout<<v[0][i]<<endl;break;}
    if(i==n-2){cout<<v[0][n-1]<<endl;}
  }
   for(int i=0;i<n-2;i++){
    if(v[1][i]!=v[2][i]){cout<<v[1][i]<<endl;break;}
    if(i==n-3){cout<<v[1][n-2]<<endl;}
  }
}
