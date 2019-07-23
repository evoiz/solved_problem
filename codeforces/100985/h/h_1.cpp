#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
string s;
bool ok=1;
const int N=1e6+5;
int n,a[N],b[N],c[N];
long long ac,bc;
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){scanf("%d",&c[i]);}
for(int i=0;i<n;i++){scanf("%d",&a[i]);}
for(int i=0;i<n;i++){scanf("%d",&b[i]);}
for(int i=0;i<n;i++){
    ac+=(a[i]-c[i])*(a[i]-c[i]);
    bc+=(b[i]-c[i])*(b[i]-c[i]);
}
if(ac<=bc){printf("Yan\n");return 0;}
printf("MaratonIME\n");
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
