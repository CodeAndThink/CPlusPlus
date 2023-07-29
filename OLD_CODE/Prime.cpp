#include<iostream>
using namespace std;

int main()
{
	while(1)
	{
		system("cls");
		int a, b, c;
		cout<<"nhap x"<<endl;
		cin>> a;
		cout<<"nhap so cua Z"<<endl;
		cin>> b;
		cout<<"nhap so du"<<endl;
		cin>>c;
		cout<<"The result is: ";
		for(int  i = 0; i <100; i++)
		{
			if((b*i+c)%a==0)
			{
				cout<<(b*i+c)/a<<", ";
			}	
		}	
		system("pause");
	}
	return 0;	 
}
