#include<iostream>
using namespace std;

int main()
{
	int arr[]={67,12,78,234,5,6,21,90,45,77,17,34,33,22,82};
	for(int i = 0; i < 15;i++)
	{
		cout << arr[i] << " /5 = " << arr[i]/5 << " remainder " << arr[i]%5 << endl;
	}
	return 0;
}
 
