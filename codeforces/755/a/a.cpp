#include <bits/stdc++.h>

using namespace std;
int pr(int in){
int co=0;
for(int i=2;i<in;i++){if(in%i==0){co++;break;}}
if(co==0){return 1;}
else{return 0;}
}

int main()
{
int x;cin>>x;
for(int i=1;;i++){
if(pr((x*i)+1)==0){cout<<i<<endl;break;}
}
         return 0;
}
