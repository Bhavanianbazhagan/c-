#include<iostream>
using namespace std;
int main()
{
	int a;
	int fact=1;
	cout<<"enter the factorial value:"<<endl;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
		
	}
	cout<<"the factorial of "<<a<<"is="<<fact;
}
