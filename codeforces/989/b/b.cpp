#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=2e5+19;
string s;
int n,p;
bool ok;
int  main(){
cin>>n>>p;
cin>>s;
for(int i=0;i<n-p;i++){if(s[i]!=s[i+p] && (s[i]!='.' && s[i+p]!='.')){ok=1;break;}}
cerr<<ok<<endl;
if(!ok){
for(int i=0;i<n-p;i++){
   if(s[i]=='.' || s[i+p]=='.'){
    if(s[i]=='.' && s[i+p]=='.'){s[i]='1';s[i+p]='0';ok=1;break ;}
    if(s[i]!='.'){s[i+p]=(s[i]=='1'?'0':'1');ok=1;break ;}
    if(s[i+p]!='.'){s[i]=(s[i+p]=='1'?'0':'1');ok=1;break ;}
   }
}
}
for(int i=0;i<n;i++){if(s[i]=='.'){s[i]='0';}}
if(ok){;cout<<s<<endl;return 0;}
if(!ok){cout<<"No\n";return 0;}
}
/**
3
6 6 6
12
3 14 15 92 65 35 89 79 32 38 46 26
12
3 1 4 1 5 9 2 6 5 3 5 9
7
2 7 1 8 2 8 1
4
1 6 1 8
11
1 2 4 8 16 32 16 8 4 2 1
6
1 2 3 1 2 3
**/
