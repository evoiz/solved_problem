#include<bits/stdc++.h>
#define f first
using namespace std;
struct s{
int x,y,r;
}m[1005];
int n;
bool ch(int i,int j){
long long  t1=(long long)(m[i].x-m[j].x)*(m[i].x-m[j].x)+(m[i].y-m[j].y)*(m[i].y-m[j].y);
long long t2=(long long) (m[i].r+m[j].r)*(m[i].r+m[j].r);
return t1==t2;
}
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){scanf("%d%d%d",&m[i].x,&m[i].y,&m[i].r);}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(ch(i,j)){printf("%d %d\n",i+1,j+1);}
    }
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
