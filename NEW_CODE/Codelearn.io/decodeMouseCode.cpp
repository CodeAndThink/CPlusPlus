#include<iostream>
#include<cstring>
using namespace std;

string decodeMorseCode(string in)
{
	//mouse code
	string a =".-";
	string b ="-...";
	string c ="-.-.";
	string d ="-..";
	string e =".";
	string f ="..-.";
	string g ="--.";
	string h ="....";
	string i ="..";
	string j =".---";
	string k ="-.-";
	string l =".-..";
	string m ="--";
	string n ="-.";
	string o ="---";
	string p =".--.";
	string q ="--.-";
	string r =".-.";
	string s ="...";
	string t ="-";
	string u = "..-";
	string v ="...-";
	string w =".--";
	string x ="-..-";
	string y ="-.--";
	string z ="--..";
	string n1 =".----";
	string n2 ="..---";
	string n3 ="...--";
	string n4 ="....-";
	string n5 =".....";
	string n6 ="-....";
	string n7 ="--...";
	string n8 ="---..";
	string n9 ="----.";
	string n0 = "-----";
	//end
	string word[] = {n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
	string result = "";
	string temp;
	for(int i = 0; i < in.length(); i++)
	{
		if(in[i] != ' ' && in[i] != '/')
		{
			temp += in[i];
		}
		else
		{
			if(temp != "")
			{
				cout << temp << ", ";				
				for(int j = 0; j < 36; j++)
				{
					if(temp == word[i])
					{
						//if(i <= 9)
						//{
						cout << i << endl;
						//}else{
						//	result+=(char)(i+97);
						//}					
					}
				}
				temp="";
			}			
		}
	}
	return result;
}

int main()
{
	string a = ".... . .-.. .-.. --- / .-- --- .-. .-.. -..";
	cout << decodeMorseCode(a);
	return 0;
}
