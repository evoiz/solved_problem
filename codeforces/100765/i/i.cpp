#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e3-200,oo=1e6+10;
int n,k,p,B[N],mem[N][N];
vector <int > gum[N];
vector <pair<int , int> > anss[N];
int dp(int pos,int th){
if(th==0){return 0;}
if(th<0){return oo;}
if(pos>k){return oo;}
if(mem[pos][th]!=-1){return mem[pos][th];}
int ans=dp(pos+1,th);///leav gum;
int res=oo,sum=B[pos];///take gum;
for(int i=0;i<gum[pos].size();i++)
{sum+=gum[pos][i];res=min(res,sum+dp(pos+1,th-i-1));}
res=min(res,ans);
return mem[pos][th]=res;
}
bool ok(int x){
int ans=dp(1,x);
return ans<=p;
}
int bsr(int l,int h){
 int mid;
 while(l<=h){
    mid=(l+h)/2;
    if(ok(mid)){l=mid+1;}
    else{h=mid-1;}
 }
 return h;
}
void path(int pos,int th){
  if(th==0 || th<0 || pos>k){return ;}
  int mn=dp(pos,th);
  if(mn==dp(pos+1,th)){path(pos+1,th);return ;}///leav gum
  int res=oo,sum=0;///take gum;
  for(int i=0;i<gum[pos].size();i++){
     sum+=gum[pos][i];
     if(mn==B[pos]+sum+dp(pos+1,th-i-1)){
       for(int j=0;j<=i;j++){cout<<anss[pos][j].second<<" ";}
       path(pos+1,th-i-1);
       return ;
    }
  }
}
int main(){
scanf("%d%d%d",&n,&k,&p);
memset(mem,-1,sizeof mem);
for(int i=1;i<=k;i++){scanf("%d",B+i);}
for(int i=0;i<n;i++){
   int a,c;
  scanf("%d%d",&a,&c);
   anss[c].push_back({a,i+1});
   gum[c].push_back(a);
}
for(int i=1;i<=k;i++){sort(gum[i].begin(),gum[i].end());sort(anss[i].begin(),anss[i].end());}
int ans=bsr(1,n);
printf("%d\n",ans);
//cerr<<dp(1,ans)<<endl;
path(1,ans);
return 0;
}
/**
4 2 10
1 2

1 2
5 2
3 1
3 2

3 + 1 + 3 +  3

**/