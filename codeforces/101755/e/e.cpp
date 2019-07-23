#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=3e5+6;
string a,b;
int ii,jj;
int main(){
cin>>a>>b;
ii=0;jj=a.length();
for(int i=0;i<a.length();i++){
if(a[i]!=b[i]){break;}
 ii++;
}
for(int i=a.length()-1;i>=0;i--){
if(a[i]!=b[i]){break;}
 jj=i;
}
cerr<<ii<<" "<<jj<<endl;
reverse(a.begin()+ii,a.begin()+jj);
cerr<<a<<" "<<b;
cout<<(a==b?"YES\n":"NO\n");
return 0;
}
/**
**/
