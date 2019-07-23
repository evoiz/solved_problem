#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int n , a[N] , dp[N];
int main(){
string a;
cin>>a;
int n=a.length();
for(int i=0;i<n;i++){

    dp[i]=1;

    for(int j=0;j<i;j++)
        if( a[j] < a[i] )
            dp[i]=max( dp[i] , 1+dp[j] );

}
int ans = 0;
for(int i=0;i<n;i++)ans=max( ans , dp[i] );

cout<<26-ans<<endl;
return 0;
}

