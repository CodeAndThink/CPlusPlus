#include<iostream>
using namespace std;

bool romaji(string s)
{
	string temp = "";
	for(int u = 0; u < s.length(); u++)
	{
		if(s[u] != 'n') temp += s[u];
	}
	bool role = false;
    char nguyenAm[6] = {'a', 'o', 'u', 'i', 'e', 'n'};
    string a = "";
    for(int i = 0; i < temp.length(); i++)
    {
    	role = false;
        for(int j = 0; j < sizeof(nguyenAm); j++)
        {
            if(temp[i] == nguyenAm[j] && temp[i])
	        {
	            role = true;
	            break;
	        }			
        }
        if(role == true)
        {
        	a += '1';
		}else{
			a += '0';
		}
    }
    if(a[a.length()-1] == '0') return false;
    if(sizeof(a) == 0) return true;
    char check = a[0];
    for(int l = 0; l < a.length(); l++)
    {
        cout << a[l];
    }
    for(int k = 1; k < sizeof(a); k++)
    {
        if(a[k]=='0' && check == '0')
        {
            return false;
        }else if(a[k]!=check || a[k] == '1')
        {
            check = a[k];
        }
    }
    return true;
}

int main()
{
	string s = "nnnnnnnnnbn";
	bool result = romaji(s);
	if(result)
	{
		cout << "true";
	}else{
		cout << "false";
	}
	return 0;
}
