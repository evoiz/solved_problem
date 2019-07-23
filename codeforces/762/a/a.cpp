#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, k;
	set<long long> a;
	cin>>n>>k;
	for (long long i=1; i*i<=n; i++){
            if (n%i==0) {a.insert({i, n/i});}
	}
	if (k<=a.size()) cout<<*next(a.begin(),k-1)<<endl;
	else{cout<<"-1"<<endl;}
}