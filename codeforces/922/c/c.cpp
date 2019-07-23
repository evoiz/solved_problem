#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+10;
ll n,k;
set<ll>st;
int main(){
scanf("%I64d%I64d",&n,&k);
for(long long i=1;i<=k;i++){
if(st.find(n%i)!=st.end()){printf("NO\n");return 0;}
st.insert(n%i);
}
printf("YES\n");
    return 0;
}
/**
1or=2or+1fack
1fack=3fack

10
2 4 8
011
101
----
110
2^a a
6
1 1 2
2 4


6
**/
