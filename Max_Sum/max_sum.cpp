//acm1003

#include <iostream>
using namespace std;
int main()
{
	int t;
	int sum1,sum2,begin1,begin2,end;
	cin>>t;								//输入数据组数
	int *n=new int[t];					//各组数据个数
	int **a=new int*[t];				//记录全部数据的二维数组
	for(int i=0;i<t;i++)
	{
		
		cin>>n[i];
		a[i]=new int[n[i]];
		for(int j=0;j<n[i];j++)			//初始化每个数组
			cin>>a[i][j];
	}
	for(int i=0;i<t;i++)
	{
		sum1=sum2=0;					//sum2记录到当前位置的和，sum1记录到当前为止出现的最大和
		begin1=begin2=end=0;			//begin2记录sum2的技术开始点，begin1记录sum1的计数开始点，end记录sum1的结束点
		for(int j=0;j<n[i];j++)
		{
			
			if(sum2+a[i][j]>=0){
				sum2+=a[i][j];
				if(sum2>=sum1){
					sum1=sum2;
					begin1=begin2;
					end=j;
				}
			}
			else{
				sum2=0;
				begin2=j+1;
			}
		}
		cout<<"Case "<<i+1<<":"<<endl;
		cout<<sum1<<" "<<begin1+1<<" "<<end+1<<endl<<endl;
	}
	delete [] n;
	delete [] a;
	return 0;
}