#include <bits/stdc++.h>
using namespace std;
const long long MOD=1073741824;
long long a,b,c,sum,cur;
long long d[1000001];
void div(){
 for(int i=1;i<=1000001;i++){
     cur=i;
    while(cur<=1000001){d[cur]++;cur+=i;}
    }
//for(int i=1;i<=10;i++){cout<<d[i]<<endl;}
}
int main() {
div();
cin>>a>>b>>c;
for(int i=1;i<=a;i++ ){
   for(int j=1;j<=b;j++){
    for(int k=1;k<=c;k++ )
        sum+=d[i*j*k]%MOD;
   }
}
cout<<sum%MOD<<endl;
	return 0;
}
