#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
ll n,arr[2000];
int main() {
	cin >> n;
	for(ll i=0; i<n; i++){cin >> arr[i];}
	for(ll i=0; i<n; i++){
		if(arr[i]%2==0){
			cout << arr[i]-1 << " ";
		}
		else
			cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
