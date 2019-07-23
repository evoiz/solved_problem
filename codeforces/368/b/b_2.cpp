#include<bits/stdc++.h>
using namespace std;
const int N=1e5+6;
int m[N],dp[N],n,k,tmp,ans;
set<int> st;
int main(){
cin>>n>>k;
for(int i=0;i<n;i++){cin>>m[i];}
dp[n-1]=1;
for(int i=n-1;i>=0;i--){dp[i]=dp[i+1]+(!(st.find(m[i])!=st.end()));st.insert(m[i]);}
////for(int i=0;i<n;i++){cout<<dp[i]<<" ";}
while(k--){
    cin>>tmp;
    cout<<dp[tmp-1]<<endl;
}
}
/**
10 10
1 2 3 4 1 2 3 4 100000 99999
1
2
3
4
5
6
7
8
9
10
**/
