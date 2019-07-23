#include <bits/stdc++.h>
using namespace std;
string tmp,s;
int n,t,ans,a,b,c;
int main(){
   scanf("%d",&t);
   while(t--){
    scanf("%d",&n);
    a=0;b=0;c=0;
    for(int i=0;i<n;i++){
    cin>>s;
    a+=(s[0]=='b' || s[0]=='B');
    b+=(s[0]=='k' || s[0]=='K');
    c+=(s[0]=='l' || s[0]=='L');
    }
    a/=2;
    ans=min(a,min(b,c));
    printf("%d\n",ans);
   }
    return 0;
}