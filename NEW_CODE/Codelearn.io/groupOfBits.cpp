#include<iostream>
using namespace std;

int groupedBits(int n)
{
	int result = 0;
	int temp = n, count = 0;
	bool state1 = true, state2;
	while(temp)
	{
		cout << temp << endl;
		count++;
		temp = temp>>= 1;
	}
	
}

int main()
{
	int a = groupedBits(30);
	return 0;
}
