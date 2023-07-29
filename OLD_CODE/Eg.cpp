#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;
// 2/3

class PhanSo{
		int tu, mau;
	public:
		PhanSo();
		~PhanSo();
		PhanSo rutGon(PhanSo );
		PhanSo tach(string );
		friend istream &operator >> (istream &, PhanSo &);// ham nhap
		friend ostream &operator << (ostream &, PhanSo &);// ham xuat
};

PhanSo::PhanSo(){
	tu = 0;
	mau = 1;
}

PhanSo::~PhanSo(){
	
}

int UCLN(int a, int b){
	while(a!= b){
		if(a > b) a = a-b;
		else b = b-a;
	}
	return a;
}

PhanSo PhanSo::rutGon(PhanSo p){
	if(p.tu*p.mau > 0 && p.tu < 0){
		p.tu*= -1;
		p.mau*= -1;
	}
	bool b = false;
	if(p.tu*p.mau< 0){
		b = true;
		p.tu = abs(p.tu);
		p.mau = abs(p.mau);
	}
	int x = UCLN(p.tu, p.mau);
	p.tu/= x;
	p.mau/= x;
	if(b) p.tu*= -1;
	return p;
}

PhanSo PhanSo::tach(string s){
	PhanSo p;
	stringstream ss(s);
	string tk;
	ss>> p.tu;
	getline(ss,tk,'/');
	ss>>p.mau;
	return p;
}

istream &operator >> (istream &is, PhanSo &p){
	string s;
	cout<< "Nhap phan so: ";
	getline(is,s);
	p = p.tach(s);
	if(p.tu!= 0){
		p = p.rutGon(p);
	}
	return is;
}

ostream &operator << (ostream &os, PhanSo &p){
	if(p.tu%p.mau == 0)
		os<< p.tu/p.mau;
	else if(p.tu == 0) os<< "0";
		else os << p.tu <<"/" << p.mau;
}

int main(){
	PhanSo p, p1, p2;
	cin>> p1;
	cin>> p2;
	
	cout<<"\nPhan so thu nhat: " << p1;
	cout<<"\nPhan so thu hai: " << p2 << endl;
	return 0;
}