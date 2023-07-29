#include<iostream>
using namespace std;
int main(){
	char ch[100];
	int n = 1234;
	for(int j = 4;j>0;j-- ){
		cout<<n%10;
		n=(n-n%10)/10;
	}
	return 0;
}
