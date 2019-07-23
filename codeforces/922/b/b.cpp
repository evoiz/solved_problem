#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+10;
int  n,ans,c;
bool ch(int a,int b,int c){
int sum=a+b+c;
int mx=max(a,max(b,c));
return mx<(sum-mx);
}
int main(){
    scanf("%d",&n);
  for(int i=1;i<=n;i++){
     for(int j=i+1;j<=n;j++){
      int c=(i^j);
      if(c<=n && c>=1&& ch(i,j,c)){
     ///  cout<<i<<" "<<j<<" "<<c<<endl;
      ans++;
      }
     }
  }
  ans/=3;
  printf("%d\n",ans);
    return 0;
}
/**

10
2 4 8
011
101
----
110
**/