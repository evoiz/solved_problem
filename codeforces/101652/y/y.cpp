#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define pb push_back
#define sz size
using namespace std;
int x,k,p;
int main() {
  scanf("%d%d%d",&k,&p,&x);
   double n=(double) sqrt(k*p/x);
   n=floor(n);
   double ans=x*n+(k*p)/n;
   n+=1.0;
   ans=min(ans,x*n+(k*p)/n);
     printf("%.3lf\n",ans);
}
/**
(n^2*x)-kp=0;
**/
