#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m[N],ans,last;
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>m[i];}
for(int i=0;i<n;i++){ans+=abs(m[i]-last);last=m[i];}
cout<<ans<<endl;
return 0;
}

/**
0 0 0 0 0 last=0; ans=0;
1 1 1 1 1 last=1; ans+=abs(last-m[i]);
2 2 2 2 2 last=2; ans+=abs(last-m[i]);


1 1 2 2 2 1 1
**/
