#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=3e4+4;
bool phi(int n){  ///phi of n
	 int res=0 ;
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
		        res++;
                while(n%i==0){n/=i;}
             }
        }
	if(n>1){res++;}
	 return (res==2);
}
int n,ans;
int main(){
scanf("%d",&n);
for(int i=1;i<=n;i++){
ans+=(phi(i));
}
printf("%d",ans);
return 0;
}
/**

17 is emirp.
18 is not prime.
19 is prime.
179 is emirp.
199 is emirp
**/
