#include <bits/stdc++.h>

using namespace std;
map<string ,double > mp;
int main()
{
    int n,t,c;scanf("%d",&n);
    string in;
    double din,sum,tmp;
    while(n--){
    char ct[90];
    mp.clear();
    sum=0;
    scanf("%d %d",&t,&c);
    for(int i=0;i<t;i++){scanf("%s %lf",&ct,&din);in=(string)ct;mp[in]=din;}
    mp["JD"]=1;
    for(int i=0;i<c;i++){
    scanf("%lf %s",&tmp,&ct);in=(string)ct;sum+=tmp*mp[in];}
     cout<<setprecision(6)<<fixed<<sum<<endl;
    }
return 0;
}
