#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e6+5;
int a[N],n;
bool ch(int i){
int x=a[i];
int y=a[x];
int z=a[y];
///cout<<y<<" "<<i;
return (z==i);
}
bool ok;
int main(){
scanf("%d",&n);
for(int i=1;i<=n;i++){
   scanf("%d",&a[i]);
}
for(int i=1;i<=n;i++){
  ok=ok||ch(i);
  if(ok){break;}
  ///cout<<i<<endl;
}
printf(ok?"YES\n":"NO\n");
    return 0;
}
/**

5
2 4 5 1 3

i ==> x ==>y==>i;

**/
