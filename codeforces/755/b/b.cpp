#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct w {
  string in;
};

int main (){
	int o,t;
	cin>>o>>t;
	w w[o];
     int	fo=o,ft=t,co=0;
     for (int i=0;i <o;i++){cin>>w[i].in;}
	for (int i=1;i <=t;i++){
		string inp;cin>>inp;
		for (int j=0;j <o;j++){
			if (inp==w[j].in)
			{co++;break;}
		}
	}
///cout <<co <<endl;
int	fin= o + t- co;
		t-= fin % 2;
		cout << (o > t? "YES": "NO");
	return 0;
}