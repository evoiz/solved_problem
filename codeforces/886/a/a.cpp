#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define oo 1e9

using namespace std;

const int N=300;
int a[10];
int main(){
for(int i=0;i<6;i++){scanf("%d",a+i);}
int mask=(1<<6)-1;
for(int i=0;i<mask;i++){
   if(__builtin_popcount(i)==3){
   int aa=0,bb=0;
      for(int j=0;j<6;j++){if((1<<j)&i){aa+=a[j];continue;}bb+=a[j];}
      if(aa==bb){printf("YES");return 0;}
   }
}
printf("NO\n");
    	return 0;
}
