# include <iostream>
using namespace std;
float kh(int,int ,int );
 int main()
 {int x1,y1,x2,y2,x3,y3,x4,y4;
  cin >>x1>>y1;
  cin>> x2>>y2;
  cin>>x3>>y3;
  cout <<"3"<<endl;
  cout <<kh(x1,x2,x3)<<" ";
  cout <<kh(y1,y2,y3)<<endl;
  cout <<kh(x2,x3,x1)<<" ";
  cout <<kh(y2,y3,y1)<<endl;
  cout <<kh(x1,x3,x2)<<" ";
  cout <<kh(y1,y3,y2)<<endl;
}
  float kh(int x,int y,int z)
    {  int xn,s;
    	xn=(x+y);
    	s=xn-z;
    	return s;
 	}