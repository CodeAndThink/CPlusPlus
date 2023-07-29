#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string a = "1G2";
	for(int i = 0; i < a.length() ;i++)
	{
		if(int(a[i]) < 48)
		{
			return 1;
		}
		if(int(a[i]) > 57 && int(a[i]) < 65)
		{
			return 1;
		}
		if(int(a[i]) > 70 && int(a[i]) < 97)
		{
			return 1;
		}
		if(int(a[i]) > 102)
		{
			return 1;
		}
	}
	return 0;
}
