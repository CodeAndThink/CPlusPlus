#include<bits/stdc++.h>
using namespace std;
long long m,n,k;
int main(){
	cin >> m>>n>>k;
	if(m>0) m=m*m*m;
	else m=m*m;
	if(n>0) n=n*n*n;
	else n=n*n;
	if(k>0) k=k*k*k;
	else k=k*k;
	cout << m << " " << n << " " << k ;
	return 0;
}
