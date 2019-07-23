#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cin>>tmp;
                if(i==j){cout<<sqrt(tmp)<<" ";}
        }
    }
return 0;
}