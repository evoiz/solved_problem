#include <iostream>
using namespace std;
int main (){
	long long x;cin>>x;long long fin=1;
	long long tx=x;
for(long long i=2;i*i <=x;++i){
		if (x%i==0)
		{
			fin*=i;
			while(x%i==0)
			{x=x/i;}
			}
	}
	if (x>1){fin*=x;}
    cout <<fin<<endl;
	return 0;
}