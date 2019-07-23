#include <bits/stdc++.h>
using namespace std;
long long  a,b,ans,n,tmp,sum;
int main() {
	cin>>a>>b;
	ans=(a*b)/__gcd(a,b);
	a=ans/a-1;b=ans/b-1;
	if(abs(a-b)==1){cout<<"Equal"<<endl;return 0;}
	cout<<(a>b?"Dasha":"Masha")<<endl;
	return 0;
}
/**
**/
