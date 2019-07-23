#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int n,plu;
   char a[999];
   cin>>a;
   for(n=0;a[n]!='\0';n++);
   sort(a,a+n);
   //cout<<a;
   plu=(n-1)/2;
  ///cout<<plu;
  cout<<a[plu];
  for(int i=plu+1;i<n;i++){
  cout<<"+"<<a[i];
  }
  return 0;
}
