#include<iostream>
#include<math.h>
using namespace std;

int soep(long long n, long long k)
{
	long long sum = 0;
	long long a = 1000000007;
    for(int i = 1; i <= n; i++)
    {
    	sum+= pow(i,k);
    	cout << sum << endl;
    	if(sum > a)
    	{
    		sum = sum - a;
		}
	}
	return sum;
}

int main()
{
	int a = 2, b = 100;
	cout << soep(a, b);
	return 0;
}
