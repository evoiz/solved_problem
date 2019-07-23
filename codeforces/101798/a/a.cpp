#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
int a,b,c;
int main(){
scanf("%d%d%d",&a,&b,&c);
bool ok=(b>a) || (b+c<=a);
printf(ok?"good luck\n":"see you next semester\n");
}
