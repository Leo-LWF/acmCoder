#include<iostream>
using namespace std;
int findDup(int array[],int n)
{
	int i;
	for(i=0;i<n;n++)
	{
		if(array[i]>0)
		{
			if(array[array[i]]>0)
				array[array[i]]=-array[array[i]];
			else
				return -array[array[i]];
		}
		else
		{
			if(array[-array[i]]>0)
				array[array[i]]=-array[array[i]];
			else
				return -array[-array[i]];
		}
	}
}
int main()
{
	int a[]={1,3,2,5,3,6};
	cout<<findDup(a,6);
	getchar();
	return 0;
}