#include<iostream>
using namespace std;

int maxXOR(int l, int r)
{
    int max = (int)(l^r);
    for(int i = l; i <= r; i++)
    {
        for(int j = l; j <= r; j++)
        {
            if(max < (int)(i^j))
            {
                max = (int)(i^j);
            }
        }
    }
    return max;
}

int main()
{
	cout << maxXOR(1,10);
	return 0;
}
