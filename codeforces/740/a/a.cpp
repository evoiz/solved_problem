#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,a,b,c;
    //while(1==1){
    cin>>n>>a>>b>>c;
    int fin=0;
     switch(n % 4) {
    case 1:
      fin= min(c, min(a + b, a * 3));
      break;
    case 2:
      fin = min(b, min(c * 2, a * 2));
      break;
    case 3:
      fin = min(a, min(b + c, c * 3));
  }
  cout<<fin<<endl;
         return 0;
}
/*1 1 4 4
  3 [3 0 0]


*/
