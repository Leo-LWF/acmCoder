#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m,n,flag;
	double a,b,c;
	while(cin>>m>>n)
	{
		flag=0;
		for(int i=m;i<=n;i++)
		{
			a=i/100;b=(i%100)/10;c=(i%100)%10;
			if((pow(a,3)+pow(b,3)+pow(c,3))==i)
				cout<<i<<" ";
			else if(flag==0)flag=1;
		}
		if(flag==1)cout<<"no";
		cout<<endl;
	}
}