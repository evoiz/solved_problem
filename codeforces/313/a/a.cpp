#include <bits/stdc++.h>

using namespace std;
int main()
{
	long long n;
	cin>>n;
	bool check=false;
	long long temp=n;
	if(n>=0)
	cout<<n<<endl;
	else
	{
		temp=temp/10;
		if(abs(temp%10)<abs(n%10))
		{
			cout<<temp<<endl;
		}
		else
		{
			if(temp/10!=0)
			cout<<temp/10,check=true;
			if(check)
			cout<<abs(n%10);
			else cout<<n%10;
		}
	}
}
