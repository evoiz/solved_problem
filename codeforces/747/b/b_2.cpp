#include <iostream>
using namespace std;
int main (){
 int x,max=1,a=0,c=0,g=0,t=0,qu=0,fa=0;
 cin>>x;char m [x];cin>>m;
 for (long long i=0;i <x;i++){
 	if (m [i]=='A'){a++;if(a>max){max=a;}}
 	if (m [i]=='C'){c++;if(c>max){max=c;}}
 	if (m [i]=='G'){g++;if(g>max){max=g;}}
 	if (m [i]=='T'){t++;if(t>max){max=t;}}
 	if (m [i]=='?'){qu++;}
 }
//cout <<a <<endl <<c <<endl <<g <<endl <<t <<endl<<qu <<endl <<max<<endl;
 fa=(max-a)+(max-c)+(max-g)+(max-t);
//cout <<fa;
int maxm=x/4;
/////////////////
if (x%4==0 && maxm>=max){
	 for (long long i=0;i <x;i++){
	 	if (m [i]=='?'){
 	    if (a <max){m [i]='A';a++;continue;}
 	    if (c <max){m [i]='C';c++;continue;}
 	    if (g <max){m [i]='G';g++;continue;}
 	    if (t <max){m [i]='T';t++;continue;}
	 }}
	 ////////////////
	 char agct [4]={'A','C','G','T'};
	 int bd=0;
	 if (x%4==0 && maxm>max){
	 for (long long i=0;i <x;i++){
	 	if (m [i]=='?'){
 	    m [i]=agct[bd];
 	    bd++;
 	    if(bd>3){bd=0;}
 	    }
	 }}
	 ///////////////////
	 cout <<m;
	}
	else
	cout <<"===";
	return 0;
}