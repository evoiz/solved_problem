#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e6;
ll tmp,ans,n;
int main(){
 scanf("%lld",&n);
 for(int i=0;i<n;i++){
   scanf("%lld",&tmp);
   if(tmp!=1){ans+=tmp-1;ans%=2;}
   printf(ans?"1\n":"2\n");
 }
 return 0;
}
/**
1 2 3 4 5 6 7 8 9
10 11 12 .....
**/
