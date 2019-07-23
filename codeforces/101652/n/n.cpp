#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
int t;
char c[200];
string s;
int main(){
scanf("%s",c);
s=string(c);
bool ok=0;
for(int i=0;i<s.length()-1;i++){ok=ok||(s[i]==s[i+1]);}
printf(ok?"Or not.":"Odd.");
    return 0;
}
/***
a b c d
(c+x*b)%a==d
(c%a)+(x*d)%a==d
a=10 b=3 0 3 6 9 2 5 8 1 4 7

**/
