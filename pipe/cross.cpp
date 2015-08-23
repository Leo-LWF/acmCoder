#include <iostream>
using namespace std;
int main()
{
	int n,k,m1,m2;
	int dx1,dy1,dx2,dy2;
	while(cin)
	{
		cin>>n;
		int ***a = new int**[2];	//动态三维数组
		for(int i=0;i<n;i++)
		{
			cin>>k;
			a[i] = new int*[2];
			for(int j=0;j<k;j++)
			{
				a[i][j]=new int[2];
				cin>>a[i][j][0]>>a[i][j][1];
			}
		}
		m1=1;
		m2=1;
//		while(m1++ < n-1){
			for(int i=0;i<n-m1;i++)
			{
//				while(m2++ < k-1)
				for(int j=0;j<k-m2;j++)
				{
					dx1=a[i][j][0]-a[i+m1][j][0];
					dy1=a[i][j][1]-a[i+m1][j][1];
					dx2=a[i][j+m2][0]-a[i+m1][j+m2][0];
					dy2=a[i][j+m2][1]-a[i+m1][j+m2][1];
				}
			}
			if(dx1*dx2<=0&&dy1*dy2<=0)cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
//	}
}