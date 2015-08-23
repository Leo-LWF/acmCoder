#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,m;
	int k=0,total=0;
	string virus[500],web[1000],a[3];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>virus[i];
	cin>>m;
	for(int i=0;i<m;i++)
		cin>>web[i];

	for(int i=0;i<m;i++)
	{
		cout<<"web "<<i<<": ";
		for(int j=0;j<n;j++)
			if(web[i].find(virus[j]))
			{
				++total;
				a[k++]=virus[j];	
				cout<<j<<" ";
				if(k==2)break;
			}
		cout<<endl;
	}
	cout<<"total: "<<total<<endl;
}
