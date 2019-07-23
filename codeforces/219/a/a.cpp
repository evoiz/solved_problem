#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define OO 1e15

using namespace std;
const int N=1e3+3;
char ch[N];
string read(){scanf("%s",ch);return (string ) ch;}
int n;
map<char,int> mp;
string s,ans;
int main(){
  scanf("%d",&n);
  s=read();
  for(int i=0;i<s.length();i++){mp[s[i]]++;}
   for(auto x:mp){
     if(x.S%n){printf("-1\n");return 0;}
     for(int i=0;i<x.S/n;i++){ans=ans+x.F;}
   }
   for(int i=0;i<n;i++){printf("%s",ans.c_str());}
    return 0;
}
