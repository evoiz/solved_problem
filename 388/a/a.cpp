#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N=1e3;
int m[N],n,tmp,ans,z;
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>tmp;m[tmp]++;z+=(tmp==0);}
for(int i=0;i<103;i++){
  if(m[i]){
    while(m[i]){
    m[i]--;
    ans++;
    tmp=1;
    ///cout<<i<<" ";
    for(int j=i;j<103;j++){
            while(m[j]&& j>=tmp){m[j]--;tmp++;/**cout<<j<<" ";**/}
    }
   /// cout<<"\t"<<tmp<<endl;
    }
  }
 }
 ///cout<<z<<endl;
 ans=max(ans,z);
 cout<<ans<<endl;
}
/**
9
0 1 0 2 0 1 1 2 10
10+2+1
0  0
1  1 0
10 2 1

**/
