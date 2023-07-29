
#include <iostream>
#include <math.h>

using namespace std;

class InsertionSort
{
	int n;
	int arr[];
	public:
	void Input()
	{
		cout << "Enter the size of array: " <<endl;
		cin >> n;
		for(int k = 0; k < n; k++)
		{
			cout << "Enter the " << k+1 << " number:" << endl;
			cin >> arr[k];
		}
		cout << "Array before sorting:" << endl;
		for(int k = 0; k < n; k++)
		{
			if(k == n-1)
			{
				cout << arr[k];
			}else{
				cout << arr[k] << ", ";	
			}	
		}
		cout << endl;
	}
	void Sort()
	{
	   	int i, key, j;
	   	for (i = 1; i < n; i++)
	   	{
	       	key = arr[i];
	       	j = i-1;
	       	while (j >= 0 && arr[j] > key)
	       	{
	           	arr[j+1] = arr[j];
	           	j = j-1;
	       	}
	       	arr[j+1] = key;
	   	}
	}
	
	void Display()
	{
		cout << "Array after sorting:" << endl;
	   	int i;
	   	for (i=0; i < n; i++)
	    {
	    	if(i == n-1)
	    	{
	    		cout << arr[i];
			}else{
				cout << arr[i] << ", ";	
			}	
		}
	}
};

int main()
{
    InsertionSort I;
 	
 	I.Input();
 	I.Sort();
 	I.Display();
 
    return 0;
}
