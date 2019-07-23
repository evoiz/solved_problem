#include <bits/stdc++.h>
using namespace std;
string s;
long long x,y,n;
int main() {
cin>>s;
for(auto c:s){x+=(c=='x');y+=(c=='y');}
n=abs(x-y);
if(x>y){while(n--){cout<<'x';}cout<<endl;return 0;}
if(x<y){while(n--){cout<<'y';}cout<<endl;return 0;}
cout<<'xy'<<endl;
}
