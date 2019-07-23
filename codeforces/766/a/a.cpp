#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
using namespace std;
int ans;
string a,b;
int main(){
cin>>a>>b;
ans=max(b.length(),a.length());
if(a==b){ans=0;}
cout<<(ans?ans:-1)<<endl;
    return 0;
}
