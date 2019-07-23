#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10;
pair<int,int> a[N],ans[N];
int n;
int main(){
    scanf("%d",&n);
   for(int i=0;i<n;i++){scanf("%d",&a[i].F);a[i].S=i;}
   sort(a,a+n);
   for(int i=0;i<n;i++){
    int ind=a[i].S;
    if(i==0){ans[ind].F=abs(a[i].F-a[i+1].F);ans[ind].S=abs(a[i].F-a[n-1].F);continue;}
    if(i==n-1){ans[ind].F=abs(a[i].F-a[i-1].F);ans[i].S=abs(a[i].F-a[0].F);continue;}
    ans[ind].F=min(abs(a[i].F-a[i+1].F),abs(a[i].F-a[i-1].F));
    ans[ind].S=max(abs(a[i].F-a[0].F),abs(a[i].F-a[n-1].F));
   }
   for(int i=0;i<n;i++){printf("%d %d\n",ans[i].F,ans[i].S);}
	return 0;}
/**
testing keyboard
**/
