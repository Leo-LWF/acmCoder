//acm1003

#include <iostream>
using namespace std;
int main()
{
	int t;
	int sum1,sum2,begin1,begin2,end;
	cin>>t;								//������������
	int *n=new int[t];					//�������ݸ���
	int **a=new int*[t];				//��¼ȫ�����ݵĶ�ά����
	for(int i=0;i<t;i++)
	{
		
		cin>>n[i];
		a[i]=new int[n[i]];
		for(int j=0;j<n[i];j++)			//��ʼ��ÿ������
			cin>>a[i][j];
	}
	for(int i=0;i<t;i++)
	{
		sum1=sum2=0;					//sum2��¼����ǰλ�õĺͣ�sum1��¼����ǰΪֹ���ֵ�����
		begin1=begin2=end=0;			//begin2��¼sum2�ļ�����ʼ�㣬begin1��¼sum1�ļ�����ʼ�㣬end��¼sum1�Ľ�����
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