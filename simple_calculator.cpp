#include<iostream>
using namespace std;
int main()
{
	int ch;
	do
	{
		float a,b,c;
		cout<<"Enter Two Numbers : ";
		cin>>a>>b;
		cout<<"\n\n***************************"<<endl;
		cout<<"1 - Add"<<endl;
		cout<<"2 - Substract"<<endl;
		cout<<"3 - Multiply"<<endl;
		cout<<"4 - Divide"<<endl;
		cout<<"5 - Exit"<<endl;
		cout<<"\n\n***************************"<<endl;
		cout<<"Operation to be Performed : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				c=a+b;
				cout<<"Sum of "<<a<<" & "<<b<<" is "<<c<<endl;
				break;
			case 2:
				c=a-b;
				cout<<"Difference of "<<a<<" & "<<b<<" is "<<c<<endl;
				break;
			case 3:
				c=a*b;
				cout<<"Product of "<<a<<" & "<<b<<" is "<<c<<endl;
				break;
			case 4:
				c=a/b;
				cout<<"Remainder of "<<a<<" & "<<b<<" is "<<c<<endl;
				break;
		}
	}while(ch != 5);
	return 0;
}
