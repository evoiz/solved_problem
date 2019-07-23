#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const ll N=4000010,oo=1e9;
ll phi[N],ans[N],result[N];
void sieve_phi() { ///phi from 1 to n using sieve
   for(int i=1;i<N;i++){phi[i]=i;}
        for(int i=2;i<N;i++){
           if ( phi[i] == i ) {
              for ( int j=i;j<N;j+=i ) {
                   phi[j]/=1ll*i;
                   phi[j]*=1ll*i-1;
               }
            }
         }
}

void sumOfGcdPairs(){
   sieve_phi();
   for (int i=1;i<N;i++){
       for (int j=2; i*j<N;j++){result[i*j] +=1ll*i*phi[j];}
   }
   for (int i=2; i<N; i++){result[i] += 1ll*result[i-1];}
}
int main(){
sumOfGcdPairs();
ll n;
while(scanf("%lld",&n)!=EOF){
    if(n==0){return 0;}
   /// if(n>=N){printf("0\n");}
    printf("%lld\n",result[n]);
}

    return 0;
}
/**
ax + by = d
4x + 6y =2
90x + 24y=6
x=1  y=-4;
15x + 4y=1
15x=4y-1
15x=4y-1
///////
17x+11y=1

**/
