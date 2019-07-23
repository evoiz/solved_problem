#include <bits/stdc++.h>
using namespace std;
int n,a,b,ans;
int m[26];
int main(){
scanf("%d",&n);
while(n--){
scanf("%d%d",&a,&b);
m[a]++;m[b]--;
}
for(int i=0;i<25;i++){m[i]+=m[i-1];ans=max(ans,m[i]);}
cout<<ans<<endl;
return 0;
}
