
 #include <bits/stdc++.h>
using namespace std;
int ans=1e9;
void bs( int m[],int value,int  low, int high) {
    int mid;
       if (high < low){return ;}// not found
       mid = low + ((high - low) / 2);
       if (m[mid] >= value){
          if(ans>m[mid]){ans=m[mid];}
        bs( m,value, low, mid-1);
       }
       else if (m[mid] < value){bs( m , value, mid+1, high);}
}

int main(){
int n;
cin>>n;
int nn[n];
for(int i=0;i<n;i++){cin>>nn[i];}
sort(nn,nn+n);
int m;cin>>m;
int tmp;
for(int i=0;i<m;i++){
        cin>>tmp;
        ans=1e9;bs(nn,tmp,0,n);
        if(tmp<=nn[n-1]){cout<<ans<<endl;}
        else{cout<<"Dr. Samer cannot take any offer :(."<<endl;}
}
return 0;
}