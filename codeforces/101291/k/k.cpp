#include<bits/stdc++.h>
using namespace std;
int w1[6],w2[6];
int main(){
double ans=0,w=0;
for(int i=0;i<6;i++){cin>>w1[i];}
for(int i=0;i<6;i++){cin>>w2[i];}
for(int i=0;i<6;i++){
 for(int j=0;j<6;j++){if(w1[i]>w2[j]){/*cout<<w1[i]<<">"<<w2[j]<<" "*/;ans++;}else if(w1[i]<w2[j]){w++;}}
}
////cout<<ans<<" "<<w<<endl;
ans=ans/(ans+w);

cout<<setprecision(5)<<fixed<<ans<<endl;
return 0;
}