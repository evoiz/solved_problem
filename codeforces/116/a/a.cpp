#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
int n,a,b,ans,sum;
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>a>>b;sum-=a;sum+=b;ans=max(ans,sum);}
cout<<ans;
}
/**
4   sum=0 ans=0
0 3 sum=3 ans=3
2 5 sum=6 ans=6
4 2 sum=4 ans=6
4 0 sum=0 ans=6
cout<<ans;
**/
