#include<bits/stdc++.h>
#define ll long long
#define all(ar) ar.begin(), ar.end()
using namespace std;
const int N=1e8+5;
string s,ans;
bool ok=0;
int main(){
cin>>s;
for(int i=0;i<s.length()-1;i++){if(s[i]=='0' && !ok){ok=1;continue;}ans=ans+s[i];}
if(ok){ans=ans+s[s.length()-1];}
cout<<ans<<endl;
return 0;
}
/**
0/1;
1/5;
1/4; 1/3;
2/5; 1/2; 3/5; 2/3; 3/4; 4/5; 1/1.
**/
