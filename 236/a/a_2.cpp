#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
	char a[101];
	cin>>a;
	int i,j,c=0;
	for(i=0;a[i]!='\0';i++);
	sort(a,a+i);
	for(j=0;j<i;j++)
	if(a[j]!=a[j+1])
	c++;
	if(c%2==0)
	cout<<"CHAT WITH HER!";
	else
	cout<<"IGNORE HIM!";
return 0;
}