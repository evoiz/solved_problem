#include <bits/stdc++.h>
using namespace std ;
const int N=4e3;
int m[N],n,k,tmp;
long long ans;
int main() {
   cin>>n>>k;
   for (int i=0; i<n; i++) {cin>>m[i];}
   for (int i=0; i<n; i++) {
        tmp=i;
      for (int j=i+1;j<i+k&&j<n; j++){
         if (m[j]<m[tmp]){tmp = j ;}
      }
      swap(m[i],m[tmp]);
   }
   for(int i=0;i<n;i++){
    ans+=(n-i)*m[i];
   }
   cout << ans << endl ;
}
/**
4
3
46
1
1 1
1 1 2
1 1 2 3
=
1+2+4+7
4+3+4+3
**/
