#include <iostream>
#include <string>
using namespace std;
int* longSum(int a[],int b[],int n)
{
	int m,i=0;
	while(i<n)
	{
		m=a[i]+b[i];
		if(m<10)a[i]=m;
		else{					//��λ����
			int k=i+1;
			a[k]+=m/10;
			a[k-1]=m%10;
			while(a[k]>=10)		//��λ֮��Ľ�λ����
			{
				++k;
				a[k]+=a[k-1]/10;
				a[k-1]=a[k-1]%10;
			}
		}
		++i;
	}
	return a;
}
int main()
{
	int n;
	int len1,len2,flag;				//flag������������Ƿ񽻻���
	char a[1000],b[1000],temp[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		flag=0;
		if(strlen(a)<strlen(b)){strcpy(temp,a);strcpy(a,b);strcpy(b,temp);flag=1;}//ȷ��a��b��
		len1=strlen(a);
		len2=strlen(b);
		int *ai=new int[len1+1];			//�����ַ���aת��Ϊint����Ľ����Ҳ��Ϊ�ӷ�������������+1ȷ����λ�����
		int *bi=new int[len2];				//�����ַ���bת��Ϊint����Ľ��
		memset(ai,0,sizeof(int)*(len1+1));
		memset(bi,0,sizeof(int)*len2);
		int j;
		cout<<"Case "<<i+1<<":"<<endl;
		if(!flag)							//�ж��Ƿ񽻻�����ȷ�����������˳��һ��
		{			
			for(j=0;j<len1;j++)	cout<<(ai[len1-1-j]=a[j]-48);//���ַ�����ת���������
			cout<<" + ";
			for(j=0;j<len2;j++)	cout<<(bi[len2-1-j]=b[j]-48);
		}
		else{
			for(j=0;j<len2;j++)	cout<<(bi[len2-1-j]=b[j]-48);
			cout<<" + ";
			for(j=0;j<len1;j++)	cout<<(ai[len1-1-j]=a[j]-48);
		}
		cout<<" = ";
		ai=longSum(ai,bi,len2);
		for(j=0;j<=len1;j++)
		{
			if(j==0&&ai[len1-j]==0)continue;	//�����ǰ���0�����
			cout<<ai[len1-j];
		}
		cout<<endl<<endl;
	}
	return 0;
}