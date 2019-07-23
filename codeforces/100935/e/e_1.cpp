#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
int m[15],t,sum,a,b,c,d,e;;
int main(){
    scanf("%d",&t);
    for(int co=1;co<=t;co++){
        sum=0;
        for(int i=0;i<10;i++){scanf("%d",&m[i]);sum+=m[i];}
        sort(m,m+10);
        c=(sum/4)-m[0]-m[9];
        a=m[1]-c;
        b=m[0]-a;
        e=m[8]-c;
        d=m[9]-e;
        printf("Case %d: %d %d %d %d %d\n",co,a,b,c,d,e);
    }
}
/**
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int main()
{
    return 0;
}
15 9 7 15 6 12 13 16 21 14
6 7 9

5*x1 +4*x2  + 3*x3  +  2*x4  + x5 = n

x1+x2+x3+x4+x5=a
x1+x2+x3+x4=b
x1+x2+x3=c
x1+x2=d
x1=e

12 18 13 10 17 20 21 15 16 14

10 12 13 14 15 16 17 18 20 21

10 12 13 14 15  5 6  7          7 9 10
s1 ans
s2 cs
**/
