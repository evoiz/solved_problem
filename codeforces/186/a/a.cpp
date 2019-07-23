#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10;
vector<int> ans;
string a,b;
int main(){
cin>>a>>b;
if(a.size()!=b.size()){cout<<"NO\n";return 0;}
for(int i=0;i<a.length();i++){
  if(a[i]!=b[i]){ans.push_back(i);}
}
if(ans.size()!=2){cout<<"NO\n";return 0;}
if(a[ans[0]]==b[ans[1]] && a[ans[1]]==b[ans[0]]){cout<<"YES\n";return 0;}
cout<<"NO\n";
}
/**

5 6 4
******
*..*.*
******
*....*
******
2 2
2 3
2 5
4 3

**/
