#include<bits/stdc++.h>
using namespace std;
const int N=1e4+3;
int n,m,a[N],ansmn,ansmx,co;
int mx(){
sort(a,a+m,greater<int>());
a[0]--;
return 1+a[0];
}
int segma(int x){return (x+1)*x/2;}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    co=n;
    for(int i=0;i<m;i++){cin>>a[i];}
    sort(a,a+m);
    for(int i=0;i<m && co ;i++){
      if(co<a[i]){ansmn+=segma(a[i])-segma(a[i]-co);break;}
      co-=a[i];
      ansmn+=segma(a[i]);
    }
    co=n;
     for(int i=0;co;i++){
          ansmx+=mx();
      co--;
    }
    cout<<ansmx<<" "<<ansmn<<endl;
    return 0;
}
/**
n=3 m=4;
6 7 8 9;
6=1 2 3 4 5 6

**/
