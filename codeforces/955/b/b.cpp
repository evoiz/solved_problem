#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e6;
string s;
map<char,int> mp;
int ans;
bool ok=0;
int main(){
 cin>>s;
 for(int i=0;i<s.length();i++){mp[s[i]]++;}
 if(mp.size()==4 && s.size()>=4){ok=1;}
 if(mp.size()==3 && s.size()>=4){ok=1;}
 if(mp.size()==2){
   int tmp=0;
   for(auto x:mp){tmp+=(x.S>=2);}
   if(tmp==2){ok=1;}
 }
 cout<<(ok?"Yes\n":"No\n");
 return 0;
}
/**
13 3 2
eliaseliaseli
**/
