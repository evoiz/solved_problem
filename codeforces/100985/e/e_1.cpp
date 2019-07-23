#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
string s;
bool ok=1;
const int N=1e5+5;
int q,n,sum[N],tmp,m[N],a,b;
int main(){
scanf("%d%d",&n,&q);
for(int i=1;i<=n;i++){
scanf("%d",&m[i]);
tmp+=m[i];
sum[i]=tmp;
}
while(q--){
  scanf("%d%d",&a,&b);
  tmp=sum[b]-sum[a-1];
  cout<<(tmp%2?"Nao\n":"Sim\n");
}
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
