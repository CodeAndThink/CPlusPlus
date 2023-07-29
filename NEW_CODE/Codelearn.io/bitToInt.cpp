#include<iostream>
#include<math.h>
#include<string>
using namespace std;

string electronicScreen(string s)
{
    string num1 = "00000101";
    string num2 = "01110110";
    string num3 = "01110101";
    string num4 = "00101101";
    string num5 = "01111001";
    string num6 = "01111011";
    string num7 = "01000101";
    string num8 = "01111111";
    string num9 = "01111101";
    string num0 = "01011111";
    string number[10] = {num0, num1, num2, num3, num4, num5, num6, num7, num8, num9};
    int length = s.length();
    int index = 0;
    string result = "";
    while(length > 0)
    {
    	for(int i = 0; i < 10; i++)
    	{
    		if(s.substr(index, 8) == number[i])
    		{
    			result = result + (char)(i+48);
			}
		}
		index += 8;
    	length -=8;
	}
	return result;
}

int main()
{
	string a = "010001010111111101111101";
	cout << electronicScreen(a);
	return 0;	
} 
