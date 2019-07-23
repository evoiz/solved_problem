#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=(1e2)+5,oo=1e9;
bool ok=0;
int a[N],b[N],x,n,k,tmp,ans,mn=oo,mx=-oo;
int main(){

scanf("%d%d",&n,&k);
for(int i=0;i<n;i++){scanf("%d",&tmp);a[tmp]++;b[tmp]++;mn=min(mn,tmp);mx=max(mx,tmp);}
ans=oo;
for(int i=0;i<N;i++){x+=a[i];a[i]=x;}
for(int i=0;i<N-k;i++){
 if(b[i]){
   ans=min(ans,n-(a[i+k]-a[i-1]));
   }
}
ans=(ans==oo?0:ans);
printf("%d\n",ans);
    return 0;
}
/**

6 3
1 3 4 6 9 10
1
3
4
6
9
10
**/
