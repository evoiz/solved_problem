#include<iostream>
using namespace std;
int main()
{
	int x;
	int y;
	int z;
	int s=0;
	cin>>x>>y>>z;
	s=x*y*z;
	if(x+y+z>s)
	s=x+y+z;
	if((x+y)*z>s)
	s=(x+y)*z;
	if(x*(y+z)>s)
	s=x*(y+z);
	cout<<s<<endl;
return 0;
}