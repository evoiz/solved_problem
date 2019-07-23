#include<bits/stdc++.h>
using namespace std;
long long n,t,safe,unsafe,tmp;
string s;
int main(){
    scanf("%I64d %I64d",&t,&n);
    safe=1,unsafe=n;
    while(t--){
    cin>>tmp>>s;
    if(s=="SAFE"){safe=max(safe,tmp);continue;}
    unsafe=min(unsafe,tmp);
    }
cout<<safe+1<<" "<<unsafe-1<<endl;
	return 0;
}
