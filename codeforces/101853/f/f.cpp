#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
using namespace std;
const int N=1e4+10,oo=1e9+7,mod=1e9+7;
int fr[N],a[N];
int n,tmp,t,m,mn,hh;
int main(){
sc(t);
while(t--){
sc(n);sc(m);
int res=0;
m*=60;
for(int i=0;i<n;i++){
    scanf("%d : %d",&hh,&mn);
    cerr<<hh<<" "<<mn<<endl;
    int tmp=hh*60+mn;
    scanf("%d : %d",&hh,&mn);
    tmp=(hh*60+mn)-tmp;
    res+=tmp;
}
if(res>=m){printf("YES\n");continue;}
printf("NO\n");

}
}
