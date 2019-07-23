#include <bits/stdc++.h>
using namespace std;
int n,ans;
int zero(int x){
int ans=0;
 while(x){x/=5;ans+=x;}
  return ans;
}
void bsr(int l,int r){
if(l>r){return ;}
int mid=(l+r)/2;
if(zero(mid)<n){ans=mid+1;bsr(mid+1,r);}
else {bsr(l,mid-1);}
}
vector <int > fin;
int main()
{
scanf("%d",&n);
  bsr(1,1e9);
  while(zero(ans)==n){fin.push_back(ans++);}
  cout<<fin.size()<<endl;
  for(auto x:fin){cout<<x<<" ";}


        return 0;
}