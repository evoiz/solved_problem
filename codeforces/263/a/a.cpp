#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int m [25];
	for (int i=0;i <25;i++){cin>>m [i];}
	int k,str;
	for (k=0;m [k]!=1;k++);
	if( k>=0 &&k <5){str=0;}
	if( k>=5 &&k <10){str=1;}
	if( k>=10&&k <15){str=2;}
	if( k>=15&&k <20){str=3;}
	if( k>=20&&k <25){str=4;}
	int s [5]={2,7,12,17,22};
	int fin=abs (k- s[str]);
    int fin2=abs (str-2);
    int   fin3=fin+fin2;
    	cout <<fin3<<endl;
    //cout<<"x"<<fin<<endl <<"y"<<fin2;
	return 0;
}