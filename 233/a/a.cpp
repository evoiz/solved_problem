#include <bits/stdc++.h>
using namespace std;
long long n;
int main() {
cin>>n;
if(n%2){cout<<-1<<endl;return 0;}
for(int i=1;i<=n;i+=2){
		cout<<i+1<<" "<<i<<(i==n-1?"\n":" ");
	}
}
/**


**/
