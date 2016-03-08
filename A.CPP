#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int a[100];
	int sum=0;
	ifstream f1("E://A.txt");
		for(int i=0;f1>>a[i],i<100;i++)
			sum+=a[i];
		cout<<"所有元素相加的和是："<<sum<<endl;
	return 0;
}