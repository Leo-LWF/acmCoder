#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	int n,m;
	double sum;
	while(cin>>n>>m)
	{
		double *a = new double[m+1];
		a[0]=n;
		sum=a[0];
		for(int i=1;i<m;i++)
		{
			a[i]=sqrt(a[i-1]);
			sum+=a[i];
		}
		cout<<setiosflags(ios::fixed);
		cout<<setprecision(2)<<sum<<endl;
	}
}