#include <iostream>
using namespace std;

int gcd(int m, int n) {
	int r;
	if (m < n) return gcd(n, m);
	r = m%n;
	if (r == 0)
		return n;
	else
		return gcd(n, r);
}

int main(){

	int m = 25, n=5;
	int kq = gcd(m, n);
	cout << kq << endl;


	system("pause");
	return 0;
}