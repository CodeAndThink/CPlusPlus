#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;

class Fraction{
		int Num, Denum;
	public:
		Fraction();
		~Fraction();
		Fraction Reducing(Fraction );
		Fraction NumAndDenum(string );
		friend istream &operator >> (istream &, Fraction &);
		friend ostream &operator << (ostream &, Fraction &);
		Fraction operator + (Fraction &);
		Fraction operator * (Fraction &);
		Fraction operator / (Fraction &);
		Fraction operator - (Fraction &);
};

Fraction::Fraction(){
	Num = 0;
	Denum = 1;
}

Fraction::~Fraction(){
	
}

int UCLN(int a, int b){
	while(a != b){
		if(a > b) 
		{
			a = a-b;
		}else {
			b = b-a;
		}
	}
	return a;
}

Fraction Fraction::Reducing(Fraction p){
	if(p.Num*p.Denum > 0 && p.Num < 0){
		p.Num *= -1;
		p.Denum *= -1;
	}
	bool b = false;
	if(p.Num*p.Denum < 0){
		b = true;
		p.Num = abs(p.Num);
		p.Denum = abs(p.Denum);
	}
	int x = UCLN(p.Num, p.Denum);
	p.Num /= x;
	p.Denum /= x;
	if(b) p.Num *= -1;
	return p;
}

Fraction Fraction::NumAndDenum(string s){
	Fraction p;
	stringstream ss(s);
	string tk;
	ss >> p.Num;
	getline(ss, tk,'/');
	ss >> p.Denum;
	return p;
}

istream &operator >> (istream &is, Fraction &p){
	string s;
	cout<< "Enter the fraction (a/b) : ";
	getline(is,s);
	p = p.NumAndDenum(s);
	if(p.Num != 0)
	{
		p = p.Reducing(p);
	}
	return is;
}

ostream &operator << (ostream &os, Fraction &p){
	if(p.Num % p.Denum == 0)
		{
			os << p.Num/p.Denum;
		} else {
			if(p.Num == 0) 
			{
				os << "0";
			} else {
				os << p.Num << "/" << p.Denum;
			}
		}
	return os;
}

Fraction Fraction::operator + (Fraction &p){
	Fraction p1;
	p1.Num = Num*p.Denum + Denum*p.Num;
	p1.Denum = Denum*p.Denum;
	if(p1.Num != 0)
	{
		p1 = p1.Reducing(p1);
	}
	return p1;
}

Fraction Fraction::operator - (Fraction &p){
	Fraction p1;
	p1.Num = Num*p.Denum - Denum*p.Num;
	p1.Denum = Denum*p.Denum;
	if(p1.Num != 0)
	{
		p1 = p1.Reducing(p1);
	}
	return p1;
}

Fraction Fraction::operator * (Fraction &p){
	Fraction p1;
	p1.Num = Num*p.Num;
	p1.Denum = Denum*p.Denum;
	if(p1.Num != 0)
	{
		p1 = p1.Reducing(p1);
	}
	return p1;
}

Fraction Fraction::operator / (Fraction &p){
	Fraction p1;
	p1.Num = Num*p.Denum;
	p1.Denum = Denum*p.Num;
	if(p1.Num != 0)
	{
		p1 = p1.Reducing(p1);
	}
	return p1;
}

int main(){
	Fraction p, p1, p2;
	cin>> p1 >> p2;
	
	cout<<"\nThe first fraction: " << p1;
	cout<<"\nThe second fraction: " << p2 << endl;
	p = p1 + p2;
	cout<< p1 <<" + " << p2 <<" = " << p << endl;
	p = p1 - p2;
	cout<< p1 <<" - " << p2 <<" = " << p << endl;
	p = p1 * p2;
	cout<< p1 <<" * " << p2 <<" = " << p << endl;
	p = p1 / p2;
	cout<< p1 <<" / " << p2 <<" = " << p << endl;

	return 0;
}