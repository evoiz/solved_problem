#include<bits/stdc++.h>
using namespace std;
long long a,b,ans;
int main () {
scanf("%I64d %I64d",&a,&b);
	while(a!=b){
		a>>=1;
		b>>=1;
		ans<<=1;
		ans++;
	}
	cout<<ans<<endl;
}
