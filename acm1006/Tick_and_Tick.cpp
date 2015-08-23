#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float d;
	float s,m,h,a;
	int MAX_SEC = 12*60*60;
	while(cin>>d)
	{		
		if(d==-1)
			return 0;
		else if(d==0)
			cout<<100.000<<endl;
		else if(d>=120)
			cout<<0.000<<endl;
		else{
			for(int t=0;t<MAX_SEC;t++)
			{
				a=0;
				s=(t%60)*6;
				m=((t/60)%60)*6.0;
				h=(t/60.0*60)*6;
				if(abs(s-m)>=d&&abs(s-m)<=360.0-d && abs(s-h)>=d&&abs(s-h)<=360.0-d && abs(h-m)>=d&&abs(h-m)<=360.0-d)
					a++;
			}
			cout<<setiosflags(ios::fixed)<<setprecision(3)<<(a/MAX_SEC)*100<<endl;
		}
	}
}