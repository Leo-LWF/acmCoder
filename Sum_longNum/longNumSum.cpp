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
		else{					//进位处理
			int k=i+1;
			a[k]+=m/10;
			a[k-1]=m%10;
			while(a[k]>=10)		//进位之后的进位处理
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
	int len1,len2,flag;				//flag标记两个数组是否交换过
	char a[1000],b[1000],temp[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		flag=0;
		if(strlen(a)<strlen(b)){strcpy(temp,a);strcpy(a,b);strcpy(b,temp);flag=1;}//确保a比b长
		len1=strlen(a);
		len2=strlen(b);
		int *ai=new int[len1+1];			//保存字符串a转化为int数组的结果，也作为加法运算结果，长度+1确保进位不溢出
		int *bi=new int[len2];				//保存字符串b转化为int数组的结果
		memset(ai,0,sizeof(int)*(len1+1));
		memset(bi,0,sizeof(int)*len2);
		int j;
		cout<<"Case "<<i+1<<":"<<endl;
		if(!flag)							//判断是否交换过，确保输出与输入顺序一致
		{			
			for(j=0;j<len1;j++)	cout<<(ai[len1-1-j]=a[j]-48);//将字符串反转后存入数组
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
			if(j==0&&ai[len1-j]==0)continue;	//结果的前面的0不输出
			cout<<ai[len1-j];
		}
		cout<<endl<<endl;
	}
	return 0;
}