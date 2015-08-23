#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	int n;
	string tmp;
	map<string,int> m;
	while(cin>>n)
	{
		if(n<=0)
			return 0;
		else
		{
			string *s= new string[n];
			for(int i=0;i<n;i++)
			{
				cin>>s[i];
			}
			tmp=s[0];
			for(int i=0;i<n;i++)
			{
				if(++m[s[i]]>=m[tmp])
					tmp=s[i];
			}
			cout<<tmp<<endl;
			delete[] s;
		}
	}
	return 0;
}