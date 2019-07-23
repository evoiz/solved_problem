#include <bits/stdc++.h>
using namespace std;
int main() {
long long a,n,tmp,ans=0;
cin>>a>>n;
while(a--){
    cin>>tmp;
    ans+=1+(tmp>n);
}
cout<<ans<<endl;
	return 0;
}