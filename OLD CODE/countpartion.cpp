// A C++ program to count number of partitions
// of a set with n elements into k subsets
#include<iostream>
using namespace std;
 
// Returns count of different partitions of n
// elements in k subsets
long long countP(int n, int k)
{
  // Base cases
  if (n == 0 || k == 0 || k > n)
     return 0;
  if (k == 1 || k == n)
      return 1;
  // S(n+1, k) = k*S(n, k) + S(n, k-1)
  return  k*countP(n-1, k) + countP(n-1, k-1);
}
 
// Driver program
int main()
{
	while(1){
		int n = 0, k = 0;
		cout << "enter the n" << endl;
		cin >> n;
		cout << "enter the k" << endl;
		cin >> k;
		cout << "Result: " << endl;
		cout << countP(n, k) << endl;
	}
   
   return 0;
}
