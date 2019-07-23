#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
int w,n,k,sum;
int main(){
cin>>k>>n>>w;
for(int i=1;i<=w;i++){sum+=i*k;}
sum-=n;
cout<<max(sum,0)<<endl;
}
