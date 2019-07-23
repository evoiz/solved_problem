#include<bits/stdc++.h>
using namespace std;
long long tmp,n,sum,m[100001],mi[1000001],fin,fid,index;
long long ans(int in ){
for(int i=0;i<n;i++){mi[i]=m[i] + ((i + 1) * (long long ) in);}
sort(mi,mi+n);
long long a=0;
for(int i=0;i<in;i++){a+=mi[i];}
return a;
}
void binary(int l, int r){
if(l>r){return ;}
int mid=(l+r)/2;
if(ans(mid)<=fid){index=mid;fin=ans(mid);binary(mid+1,r);}
else{binary(l,mid-1);}
}
int main()
{
    cin>>n>>fid;
    for(int i=0;i<n;i++){cin>>m[i];}
    binary(0,n);
    cout<<index<<" "<<fin<<endl;
        return 0;
}