#include <iostream>
#include <string>
using namespace std;
char GetChar(char str[])
{
	if(str==NULL)
		return 0;
	const int size=256;
	unsigned count[size]={0};
	char buffer[size];
	char *q=buffer;
	for(const char *p=str;*p!=0;++p)
		if(++count[(unsigned char)* p]==1)
			*q++=*p;
	for(char *p=buffer;p<q;++p)
		if(count[(unsigned char)* p]==1)
			return *p;
	return 0;
}
int main()
{
	int t;	
	while(cin!=NULL)
	{
		cin>>t;
		char **str=new char*[1000000];
		for(int i=0;i<t;i++)
		{
			gets(str[t]);
		}		
		for(int i=0;i<t;i++)
		{
			cout<<GetChar(str[i])<<endl;
		}
		break;
	}
}