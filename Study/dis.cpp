#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		cout<<setiosflags(ios::fixed);
		cout<<setprecision(2)<<sqrt((pow((a-c),2)+pow((b-d),2)))<<endl;
	}
	return 0;
}