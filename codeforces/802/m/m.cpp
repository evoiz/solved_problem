#include <bits/stdc++.h>
using namespace std;
long long n,k;
long long v[2345];
int main() {
cin>>n>>k;
for(int i=0;i<n;i++){cin>>v[i];}
long long sum=0;
sort(v,v+n);
for(int i=0;i<k;i++){sum+=v[i];}
cout<<sum<<endl;
	return 0;
}