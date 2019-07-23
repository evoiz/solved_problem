#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=5e5+10,oo=1e5+9;
pair<int ,int > p[N];
int n,low,ans;
int main(){
scanf("%d",&n);
  for(int i=0;i<n;i++){scanf("%d%d",&p[i].S,&p[i].F);}
  sort(p,p+n);
  for(int i=0;i<n;i++){if(low<p[i].S){ans++;low=p[i].F;}}
  printf("%d",ans);
 	return 0;
}
/**
dp[ val ][len];
dp[a[i]][1]=1;
dp[a[i]][2]=sum(dp[a[i]-1][1]);
dp[a[i]][3]=sum(dp[a[i]-1][2]);
dp[a[i]][3]=
dp[len][]

5 2
1 2 3 5 4

**/
