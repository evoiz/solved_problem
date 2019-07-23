#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
bool ch(int x){
while (x){if(x%10==0){return 0;}x/=10;}
return 1;
}
int n;
int main() {
  scanf("%d",&n);
  while(!ch(n+1)){n++;}
  printf("%d\n",n+1);
}
