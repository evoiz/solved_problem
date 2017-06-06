#include <bits/stdc++.h>
using namespace std;
int m[10010];
int main()
{
int n;cin >>n;
for(int i=0;i<n;i++){cin>>m[i];}
sort(m,m+n);
for(int i=0;i<n;i++){cout<<m[i];(i<n-1?cout<<" ":cout<<endl);}
}
