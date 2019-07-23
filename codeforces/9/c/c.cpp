#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
string a,b;
int ans;
bool ok;
int main(){
cin>>a;
for(int i=0;i<a.length();i++){
ans*=2;
if(ok){b+="1";ans++;continue;}
if(a[i]-'0'>1){b+="1";ans++;ok=1;continue;}
if(a[i]-'0'==1){b+="1";ans++;continue;}
b+="0";
}
cerr<<b<<endl;
cout<<ans<<endl;
}
