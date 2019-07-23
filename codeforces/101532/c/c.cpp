#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N = 1e6+19,mod = 1e9+7;
int a[N],n,t,ans;
multiset<int>ms;

int main(){
scanf("%d",&t);
while(t--){
ms.clear();
scanf("%d",&n);
for(int i=0;i<n;i++){scanf("%d",a+i);ms.insert(a[i]);}
for(int i=0;i<n;i++){
ms.erase(ms.find(a[i]));
if(ms.lower_bound(mod-a[i])==ms.begin()){ans=a[i]+*(--ms.end());}
else{auto fin=ms.lower_bound(mod-a[i]);--fin;ans=a[i]+*fin;}
printf(i==n-1?"%d\n":"%d ",ans%mod);
ms.insert(a[i]);
}

}
return 0;
}

/**
1 in
2 get
3 rem

**/
