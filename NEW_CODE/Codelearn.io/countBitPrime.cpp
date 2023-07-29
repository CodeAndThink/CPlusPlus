#include<iostream>
using namespace std;

bool checkPrime(int a)
{
	bool check = false;
	if(a < 2) return false;
	for(int i = 2; i < a; i++)
	{
		if(a%i==0)
		{
			check = true;
			break;
		}
	}
	if(check == true) return false;
	else return true;
}

int countBitsPrime(int L, int R)
{
	int result = 0, count = 0;
	for(int i = L; i <= R; i++)
	{
		count = 0;
		int temp = i;
		while(temp)
		{	
			if(temp&1) 
			{
				count++;	
			}
			temp = temp >>=1;
		}
		if(checkPrime(count))
		{
			result++;
		}
	}
	return result;
}

int main()
{
	int a = 6, b = 10;
	cout << countBitsPrime(a, b);
	return 0;
}
