#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;
bool checkprimenumber(long long n)
{
    if (n <= 1)
        return false;
    for (long long i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
long long primeXor(long long a, long long b)
{
    vector<long long> a1, b1;
    if(a < b)
    {
        long long temp = a;
        a = b;
        b = temp;
    }
    for(long long i = 1; i < a; i++)
    {
    	if(a%i==0) a1.push_back(i);     	    
    }
    for(long long i = 1; i < b; i++)
    {
    	if(b%i==0) b1.push_back(i); 
    } 
    long long result = 1;
    bool state;
    for(int i = 0; i < a1.size(); i++)
    {
    	if(a1[i] != b1[i])
    	{
    		if(i <= b1.size() - 1)
    		{
    			result = result*a1[i]*b1[i];
			}
    		if(i+1 > b1.size())
    		{
    			result*=a1[i];
			}
		}
	}
    return result;
}

int main()
{
	int a = 44, b = 2;
	cout << primeXor(a, b);	
	return 0;
}
