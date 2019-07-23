#include <bits/stdc++.h>

using namespace std;
bool pr[1000000];
set <long long> st;
void start(){
    memset(pr,0,sizeof pr);
for(long long  i=2;i<=1000000;i++){
       if(!pr[i]){
       for (long long j=i*2;j<=1000000;j+=i){pr[j]=1;}
     }
   }
   ///if(!pr[999983]){cout<<"t"<<endl;}
   ///cout<<(long long) 999983*999983;
   for(long long i=2;i<1000000;i++){if(!pr[i]){st.insert(i*i);}}
}
int main()
{
   start();
   bool is_in;
   long long n,tmp;cin>>n;
   for(long long  i=0;i<n;i++){
       cin>>tmp;
      is_in= st.find(tmp) != st.end();
    if(is_in){cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}
   }
    return 0;
}
