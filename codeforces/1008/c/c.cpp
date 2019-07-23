#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10;
int n;
ll arr[N],cpy[N],cnt;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){cin>>arr[i];cpy[i]=arr[i];}
	sort(arr,arr+n);
	sort(cpy,cpy+n);
	int i=0;
	int j=0;
	for(;i<n&&j<n;i++)
	{
		if(cpy[j]<arr[i])
		{
			cpy[j]=arr[i];
			j++;
		}
	}

	for(i=0;i<n&&i<j;i++){
		if(cpy[i]>arr[i])
			cnt++;
		//cout<<copy[i]<<endl;
	}
	cout<<cnt;
	return 0;
}
