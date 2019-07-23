#include <bits/stdc++.h>

using namespace std;
pair<int ,int >pr[9999999];
int main()
{
	int sum,n,ans=0;cin>>sum;cin>>n;
	pair<int ,int > temp;
	for(int i=0;i<n;i++){cin>>pr[i].first>>pr[i].second;}
	 for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(pr[i].first>pr[j].first){
                    temp.first = pr[j].first;
                    temp.second= pr[j].second;
                    pr[j].first = pr[i].first;
                    pr[i].first = temp.first;
                    pr[j].second = pr[i].second;
                    pr[i].second= temp.second;
                }
             }
         }
	/////cout<<endl;
	////////for(int i=0;i<n;i++){cout<<pr[i].first<<" "<<pr[i].second<<endl;}
	for(int i=0;i<n;i++){
        if(sum>pr[i].first){sum+=pr[i].second;}
        if(sum<=pr[i].first){cout<<"NO"<<endl;return 0;}
	}
	////cout<<endl<<ans<<endl;
	cout<<"YES"<<endl;
   return 0;
}