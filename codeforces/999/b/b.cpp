#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
string s;
int n;
int main(){
cin>>n>>s;
for(int i=1;i<=n;i++){if(n%i==0){reverse(s.begin(),s.begin()+i);}}
cout<<s<<endl;
}
