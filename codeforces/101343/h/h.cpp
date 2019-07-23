#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
///map<char,long long>mp;
///pair<,>p[];
set<int>st[52];
const int N=1e5+5;
int m[N],ans[N],tmp,tans,n;
std::set<int>::iterator itup;
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&m[i]);
st[m[i]].insert(i);
}
bool found=0;
for(int i=0;i<n;i++){
        tmp=1e5;
        found=0;
 for(int j=m[i]+1;j<=50;j++){
    itup=st[j].upper_bound(i);
    if(itup!=st[j].end()){found=1;if(*itup<tmp){tmp=*itup;tans=j;}}
    else{continue;}
 }
 (found?ans[i]=tans:ans[i]=-1);
}

for(int i=0;i<n;i++){cout<<ans[i]<<" ";}
}
