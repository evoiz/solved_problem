#include<bits/stdc++.h>
using namespace std;

int main()
{
   //// while(1){
  long long n,ans=1;
  string a,pa;
cin>>n>>pa;
n--;
while(n--){
 cin>>a;
 if(a!=pa ){ans++;}
 pa=a;

}
cout<<ans<<endl;
   //// }
return 0;
}