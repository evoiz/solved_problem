#include <iostream>

using namespace std;

int main()
{
int input;
cin>>input;
int luky[]={4,7,77,44,74,47,777,444,744,474,447,477,747,774};
   bool is=false;
   for(int i=0;i<14;i++){
    if (input%luky[i]==0){
    is=true;
    }
   }
   if(is==true){
   cout<<"YES";
   }
   else{
   cout<<"NO";
   }
    return 0;
}
