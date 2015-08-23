#include <iostream>
#include <math.h>
#include <iomanip>
#define PI 3.1415927
using namespace std;
int main()
{
	double a;
	while(cin>>a)
	{
		cout<<setiosflags(ios::fixed);
		cout<<setprecision(3)<<PI*pow(a,3)*4/3<<endl;
	}
}