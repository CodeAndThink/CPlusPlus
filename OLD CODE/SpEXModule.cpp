#include<iostream>
using namespace std;

int main()
{
	while(1)
	{
		int i = 0, n, a, b, result=0;
		system("cls");
		cout<<"Nhap x"<<endl;
		cin>>n;
		cout<<"Nhap so mu cua x"<<endl;
		cin>>a;
		cout<<"Nhap so cua Z"<<endl;
		cin>>b;
		for(i = 0; i < 100; i++)
		{
			if((n*i-a)%b==0)
			{
				result=1;
				break;
			}	
		}
		if(result == 1)
		{
			cout<<"yes"<<endl;
			cout<<i;
		}else{
			cout<<"No"<<endl;
		}
		system("pause");
	}
	return 0;
}
