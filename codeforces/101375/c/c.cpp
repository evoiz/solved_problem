#include<bits/stdc++.h>
using namespace std;
const int N = 500004;
int n,t1,t2;
struct sahn{
int x,y,r;
};
vector<sahn>v;
char c;
bool ok;
int main(){
	scanf("%d",&n);
	sahn tmp;
	while(n--){
        cin>>c>>tmp.x>>tmp.y>>tmp.r;
        if(c=='A'){
         ok=1;
            for(auto sh:v){
            t1=(sh.x-tmp.x)*(sh.x-tmp.x)+(sh.y-tmp.y)*(sh.y-tmp.y);
            t2=(sh.r+tmp.r)*(sh.r+tmp.r);
            ok=ok&&(t1>=t2);
            }
          ////  cout<<ok<<endl;
           if(ok){v.push_back(tmp);}
        }
        else{
           ok=0;
           for(int i=0;i<v.size();i++){
            if(tmp.x==v[i].x && tmp.y==v[i].y && tmp.r==v[i].r){ok=1;v.erase(v.begin()+i);break;}
           }
            /// cout<<ok<<endl;
        }
        cout<<(ok?"Ok\n":"No\n");
	}

}
/**
j>>i+2....n
i>>n-2;
1 2 3 0 3
1 3 6 6 9
i=3 j=5;
(1)=sum[i];
(2)=sum[j-1]-sum[i];
(3)=sum[n]-sum[j-1];
**/
