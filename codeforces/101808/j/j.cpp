#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e3+10,mod=7901;
ll la,lb,ra,rb,da,db,pa,pb,t,k,res;
int main(){
scanf("%lld",&t);
while(t--){
res=0ll;
scanf("%lld%lld%lld%lld",&la,&ra,&pa,&da);
scanf("%lld%lld%lld%lld",&lb,&rb,&pb,&db);
scanf("%lld",&k);
da=(da?1:-1);db=(db?1:-1);
while(k--){
pa+=da;pb+=db;
if(pa>ra){pa=ra-1;da=(da*-2)+da;}
else if(pa<la){pa=la+1;da=(da*-2)+da;}
if(pb>rb){pb=rb-1;db=(db*-2)+db;}
else if(pb<lb){pb=lb+1;db=(db*-2)+db;}
res+=(pa==pb);
}
printf("%lld\n",res);
}

}
