#include<iostream>
using namespace std;
class A
{
	public:
		int n,range;
	    void display()
	   {
	     cout<<"enter the number:";
	     cin>>n;
	     cout<<"enter the range:";
	     cin>>range;
	    for(int i=1;i<=range;++i)
	    {
	      	cout<<n<<"*"<<i<<"="<<n*i<<endl;  
	        
		}
	
	}
	
	
}obj;
int main()
{


	obj.display();
	return 0;
	
}
