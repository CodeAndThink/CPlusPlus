#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<fstream>
#include<string.h>
#include<conio.h>
#include <sstream>

using namespace std;

int main(){
	int d = 4, m = 1, y = 2022, dd = 10, mm = 1, yy = 2022;
	
    long int n1,n2;
    int years,l,i;
    const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//day of each months
    n1 = y*365 + d;
    for (i=0; i<m - 1; i++)
        n1 += monthDays[i]; //fn1353
    years = y;
    if (m <= 2)
    	years--;
    	l= years / 4 - years / 100 + years / 400;
    	n1 += l;
    n2 = yy*365 + dd;
    for (i=0; i<mm - 1; i++)
        n2 += monthDays[i];
    years = yy;
    if (m <= 2)
    	years--;
    	l= years / 4 - years / 100 + years / 400;
    	n2 += l;
    n1=n2-n1;
    n2=n1;
    if(n2>0)
    	cout<<"\n\t\tThe Total Fine is : "<< n2; 	
	return 0;
}
