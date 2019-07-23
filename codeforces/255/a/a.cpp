#include <bits/stdc++.h>
using namespace std;
int  chest,biceps,bck,tmp,n;
int main() {
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&tmp);
    if(i%3==0){chest+=tmp;continue;}
    if(i%3==1){biceps+=tmp;continue;}
    if(i%3==2){bck+=tmp;continue;}
   }
   n=max(chest,max(biceps,bck));
   cout<<(n==chest?"chest\n":n==biceps?"biceps\n":"back\n");
}
