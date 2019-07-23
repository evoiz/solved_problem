#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
int ok=1;
int main(){
cin>>s;
for(auto x:s){
if(x=='9' && ok){ok=0;cout<<x;continue;}
ok=0;
if(x>'4'){cout<<'9'-x;continue;}
cout<<x;
}
cout<<endl;
}
