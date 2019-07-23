#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
string s;
int n,ans;
int main(){
cin>>n>>s;
for(int i=0;i<n-1;i++){
    if((s[i]=='R' && s[i+1]=='U') || (s[i]=='U' && s[i+1]=='R')){ans++;i++;}
}
cout<<n-ans<<endl;
}
/**
RURUUR
URUR
**/
