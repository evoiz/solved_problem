#include <bits/stdc++.h>
using namespace std;
		int t1,t2,t ,ans=-1,n,sum=0;
int main(){
cin>>n;
	while(n--){
		int x;cin>>x;sum+=x;
	}
	cin>>n;
	while(n--){
            cin>>t1>>t2;
		if(t2>=sum){ans=max(t1,sum);break;}
	}
	cout<<ans<<endl;
	return 0;
}
