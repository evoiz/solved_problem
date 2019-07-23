#include <bits/stdc++.h>
using namespace std;
///vector<pair<int,int>>v;
///map<char,long long>mp;
///pair<,>p[];
///set<int>st[52];
///std::set<int>::iterator itup;
const int N=1e5+5;
long long sum[N],tmp,n,m,ans,c;
bool ch(int x){
for(int i=x;i<=n;i++){if(sum[i]-sum[i-x]<=m){return 1;}}
return 0;
}
int bsr(int l,int r){
if(l>r){return l;}
int mid=(l+r+1)/2;
///cout<<l<<"\t"<<r<<endl;
if(ch(mid)){return bsr(mid+1,r);}
else{return bsr(l,mid-1);}
}
int main(){
cin>>n>>m;
cin>>sum[1];
for(int i=2;i<=n;i++){cin>>tmp;sum[i]=tmp+sum[i-1];}
cout<<bsr(0,n)-1<<endl;
}
