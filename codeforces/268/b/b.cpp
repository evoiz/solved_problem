#include<bits/stdc++.h>
using namespace std;
long int ans,n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){ans+=(n-i)*(i+1)-i;}
	cout<<ans<<endl;
}