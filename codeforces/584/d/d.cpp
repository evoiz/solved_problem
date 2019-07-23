#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
bool is(int n){
if(n==1){return 0;}
for(int i=2;i*i<=n;i++){if(n%i==0){return 0;}}
return 1;
}
int best(int n){
n--;
while(!is(n--));
return n+1;
}
int n;
int main(){
scanf("%d",&n);
if(is(n)){printf("1\n%d",n);return 0;}
if(is(n-2)){printf("2\n%d %d\n",n-2,2);return 0;}
int tmp=best(n);
n-=tmp;
for(int i=2;i<n;i++){
if(is(i) && is(n-i)){printf("3\n%d %d %d",tmp,i,n-i);break;}
}

}
