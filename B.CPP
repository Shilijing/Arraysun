#include<iostream>
#include<fstream>
using namespace std;

void Arraysum(int n)
{
	int *a,sum=0;
    a=new int[n];
	ifstream f2("E://B.txt");
		for(int i=0;f2>>a[i],i<n;i++)
			sum+=a[i];
		cout<<sum;
		delete []a;
}

int main(void)
{
	int n;
	cout<<"请输入数据长度："<<endl;
	cin>>n;
	cout<<"所求元素的和："<<endl;
	Arraysum(n);
	return 0;
}