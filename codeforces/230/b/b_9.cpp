#include<bits/stdc++.h>
using namespace std;
const int N=1000005;
bool ch[N];
set<long long>pr;
long long a,b,tmp;
void seave(){
for(long long i=2;i<=1000000;i++){
    if(!ch[i]){
        pr.insert(i*i);
        for(long long j=i*2;j<=1000000;j+=i){ch[j]=1;}
    }
 }
}
int main(){
seave();
cin>>a;
while(a--){
    cin>>b;
    if(pr.find(b)!=pr.end()){printf("YES\n");continue;}
    printf("NO\n");

}
}
