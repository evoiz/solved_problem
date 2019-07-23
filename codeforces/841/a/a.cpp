#include <bits/stdc++.h>
using namespace std;
int n,k;
string s;
int m[32];
bool ok=0;
int main(){
cin>>n>>k>>s;
for(auto x:s){m[x-'a']++;}
for(int i=0;i<26;i++){ok=ok||(m[i]>k);}
if(ok){cout<<"NO"<<endl;return 0;}
 cout<<"YES"<<endl;
}

