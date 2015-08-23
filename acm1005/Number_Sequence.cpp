#include <iostream>
using namespace std;
int main()
{
	int a,b,n,i;
	int f[50];
	while(cin>>a>>b>>n)
	{
		if(a==0&&b==0&&n==0)
			return 0;
		else if(n==1||n==2)
			cout<<"1"<<endl;
		else{
			f[1]=f[2]=1;
			for(i=3;i<50;i++)
			{
				f[i]=(a*f[i-1]+b*f[i-2])%7;	//ÖÜÆÚÎª7*7=49
			}
			f[0]=f[49];
			cout<<f[n%49]<<endl;
		}
	}
}