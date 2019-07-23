#include <bits/stdc++.h>

using namespace std;
void ot(long long i,long long j){

while(j--){cout<<4;}
while(i--){cout<<7;}
cout<<endl;
}
int main()
{
	long long n,tn;
	cin>>n;
	bool ok=0;
	long long x,y;
	for(long long i=0;i*7<=n;i++){
        if((n-i*7)%4==0){x=i,y=(n-i*7)/4;ok=1;}
	}
	if(ok){ot(x,y);return 0;}
	cout<<"-1"<<endl;
}
