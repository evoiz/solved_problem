#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N = 2e5+6,oo=1e9;
char s[N];
int a,b,c;
int main(){
scanf("%d",&c);
scanf("%s",s);
for(int i=0;i<c;i++){a+=(s[i]=='1');b+=(s[i]=='0');}
printf("%d\n",abs(a-b));
    return 0;
}