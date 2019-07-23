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
/**
const int N=1e5+5;
long long ans,n,m[N],tmp,mx;
scanf("%I64d",&n);
for(int i=0;i<n;i++){scanf("%I64d",&m[i]);mx=max(mx,m[i]);}
for(int i=0;i<n;i++){tmp+=(m[i]==mx);if(m[i]==mx) ans=i;}
if(tmp>1){cout<<-1<<endl;return 0;}
cout<<ans+1<<endl;

**/
/**string s;
set<char> st;
int ans,n;
int main () {
cin>>s>>n;
for(auto x:s){st.insert(x);}
ans=n-st.size();
ans=max(ans,0);
if(s.length()<n){cout<<"impossible"<<endl;return 0;}
cout<<ans<<endl;
 return 0;
}**/
