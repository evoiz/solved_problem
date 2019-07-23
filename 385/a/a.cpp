#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,k,mx=0;cin>>n>>k;
int m[n];
for(int i=0;i<n;i++){cin>>m[i];}
for(int i=1;i<n;i++){
        if(m[i]<m[i-1] && (abs(m[i]-m[i-1]))>=k){mx=max(mx,abs(m[i]-m[i-1]));}
}
if(mx==0){cout<<0<<endl;return 0;}
cout<<mx-k<<endl;
}
/*

1 2

1 4
 3 2
 3 4

*/
