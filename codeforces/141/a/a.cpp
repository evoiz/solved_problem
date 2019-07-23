#include <bits/stdc++.h>
using namespace std;
int m[10010];
int main()
{
string a,b,c;
cin>>a>>b>>c;
a=a+b;
sort(a.begin(),a.end());
sort(c.begin(),c.end());
(a==c?cout<<"YES"<<endl:cout<<"NO"<<endl);
}