#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,a=0,b=0,c=0;cin>>n;
	int m[n];
	for(int i=0;i<n;i++){
            cin>>m[i];
    if(m[i]==1){a++;}
    else if(m[i]==2){b++;}
    else if(m[i]==3){c++;}
	}
	if(a!=0 && b!=0 && c!=0){
	   int mn=min(a,min(b,c));
	   cout<<mn<<endl;
        for(int j=0;j<mn;j++){
             for(int i=0;i<n;i++){if(m[i]==1){cout<<i+1<<" ";m[i]=0;break;}}
             for(int i=0;i<n;i++){if(m[i]==2){cout<<i+1<<" ";m[i]=0;break;}}
             for(int i=0;i<n;i++){if(m[i]==3){cout<<i+1<<" ";m[i]=0;break;}}
             cout<<endl;
             }
	    }
	    else{cout<<0<<endl;}
   return 0;
}
/*

1 2

1 4
 3 2
 3 4

*/
