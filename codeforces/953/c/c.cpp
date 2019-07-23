#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e5+10;
int a[N],x,y,n;
set<int>all;
int main(){
memset(a,-1,sizeof a);
scanf("%lld",&n);
for(int i=0;i<n;i++){scanf("%d",a+i);}
for(int i=0;i<n;i++){
x+=a[i];
y+=!a[i];
if(a[i]+a[i+1]==1){all.insert(x),all.insert(y);x=0;y=0;}
}
all.insert(x),all.insert(y);
if(all.find(0)!=all.end()){all.erase(all.find(0));}
if(all.size()==1){printf("YES\n");return 0;}
if(all.size()==1){printf("YES\n");return 0;}
printf("NO\n");
return 0;
}
