#include<iostream>
#include<fstream>
using namespace std;

int Arraysum(int n,int min,int max)
{
	int *a;
	int sum=0;
	a=new int[n];
	ifstream f3("E://B.txt");
	{
	for(int i=0;f3>>a[i],i<n;i++)
		if(a[i]<=max&&a[i]>=min)
			sum+=a[i];
	}
	cout<<"元素和为："<<sum<<endl;
	return sum;
}

int main()
{
	int n=0;
    int min;
	int max;
	cout<<"指定最小值："<<endl;
	cin>>min;
	cout<<"指定最大值："<<endl;
	cin>>max;
	cout<<"输入数组长度："<<endl;
	cin>>n;
	Arraysum(n,min,max);
	return 0;
}
