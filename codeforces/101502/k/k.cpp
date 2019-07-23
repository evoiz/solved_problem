#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
const int N=1e5+5;
long long n,t,ans,s,tmp;
double d;
int main(){
   cin>>t;
   while(t--){
   cin>>n>>d;
   ans=0;
   for(int i=0;i<n;i++){cin>>tmp;ans+=(tmp>=50);}
   s=ceil(n*d);
   bool ok=(ans>=s);
   cout<<(ok?"YES":"NO")<<endl;
   }
    return 0;
}