#include <iostream>
#include <algorithm>
using namespace std;
char m[1001];
int magic(int b,int sz){
int fin=0;
for(int i=b;i<sz;i+=2){
if(m[i]=='g'&& m[i+1]=='o'){fin+=2;continue;}
else{break;}
}
//cout<<fin<<endl;
return fin;
}
int main(){
int sz;
cin>>sz;
cin>>m;
for(int i=0;i<sz;i++){
if(m[i]=='o'&& m[i+1]=='g'&& m[i+2]=='o'){cout<<"***";i+=magic(i+1,sz);continue;}
else{cout<<m[i];}
}
return 0;
}
