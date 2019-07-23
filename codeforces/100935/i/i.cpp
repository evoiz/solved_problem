#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
double x,xa,xb,y,ya,yb,r;
int t,ca;
int main(){
    scanf("%d",&t);
    while(t--){
        ca++;
        scanf("%lf%lf%lf",&x,&y,&r);
        scanf("%lf%lf%lf%lf",&xa,&ya,&xb,&yb);
        xa-=x;ya-=y;xb-=x;yb-=y;
        double dx=(sqrt((r*r-yb*yb)));
        double dy=-(sqrt((r*r-xa*xa)));
        double len=sqrt((dx-xa)*(dx-xa)+(yb-dy)*(yb-dy));
        double angel=acos((r*r*2-len*len)/(2*r*r));
        double S1=fabs((dx-xa))*fabs(yb-dy)/2;
        double S2=((r*r)/2)*(angel-sin(angel));
        double ans = S1 + S2;
        cout << "Case "<<ca<<": ";
        cout <<fixed<<setprecision(5)<<ans<<endl;
    }
}
