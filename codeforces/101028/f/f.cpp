#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
while(t--){
    string a,b,s;
    cin>>a>>b;
    if (a.find(b)<a.length()){cout << "good\n";continue;}
        bool ok=0;
        s=b;
        for (int i=0;i<4;i++){
            s.erase(s.begin()+i);
            if (a.find(s)<a.length()){ok=1;break;}
            s=b;
        }
     (ok?cout<<"almost good"<<endl:cout<<"none"<<endl);
    }
    return 0;
}
