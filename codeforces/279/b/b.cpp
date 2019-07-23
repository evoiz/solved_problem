#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e5+5;
long long sum[N],tmp,n,m,ans,c;
bool ch(int x){
for(int i=x;i<=n;i++){if(sum[i]-sum[i-x]<=m){return 1;}}
return 0;
}
int bsr(int l,int h){
int mid;
while(l<=h){
 mid=(l+h)/2;
 if(ch(mid)){l=mid+1;}
 else{h=mid-1;}
}
return h;
}
int main(){
scanf("%d%d",&n,&m);
for(int i=1;i<=n;i++){scanf("%lld",&tmp);sum[i]=tmp+sum[i-1];}
printf("%d\n",bsr(0,n));
}
/**

3 3
-1 0 0
1 1 1
**/
