#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mr (long long in){
int m=0;
 while(in>0){in=in/10;m++;}
    return m;
}
int main()
{
        long long x,ru,mrr,nine1,nine2=0;
        cin>>x;
        mrr=mr(x);
        nine1=(pow(10,mrr)-1)/10;
        ///cout<<nine<<endl;
        while(nine1>0){
        nine2+=nine1;
        nine1=nine1/10;
        }
        cout<<(x*mrr)-nine2<<endl;
    return 0;
}