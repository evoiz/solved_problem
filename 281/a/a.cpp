#include <iostream>
using namespace std;
int main (){
//while(1==1){
    char m[99999];
    cin>>m;int j;for(j=0;m[j]!='\0';j++);
    if(m[0]>='a'&&m[0]<='z'){m[0]=m[0]-32;}
    for(int i=0;i<j;i++){cout<<m[i];}
return 0;
}
