#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tmp;
    int m[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cin>>tmp;
                if(i==j){m[i]=sqrt(tmp);}
        }
    }
     for(int i=0;i<n-1;i++){cout<<m[i]<<" ";}
     cout<<m[n-1]<<endl;
return 0;
}
