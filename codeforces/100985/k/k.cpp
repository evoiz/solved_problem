#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
string s;
int tmp;
const int N=1e5+5;
bool vis[N];
int main(){
cin>>s;
for(int i=0;i<s.length();i++){
    if(vis[i]){continue;}
    tmp=0;
   cout<<s[i];
   char c=s[i];
   for(int j=i;j<s.length()&&s[j]==c;j++,tmp++){vis[j]=1;}
   cout<<tmp;
}
cout<<endl;
return 0;
}
