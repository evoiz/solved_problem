#include <bits/stdc++.h>
using namespace std;
int t,n,r,sum,tmp;
int main(){
scanf("%d",&t);
while(t--){
scanf("%d%d",&n,&r);
sum=1500;
while(n--){scanf("%d",&tmp);sum+=tmp;}
(sum==r?cout<<"Correct"<<endl:cout<<"Bug"<<endl);
}
    return 0;
}
