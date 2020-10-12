#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0)
		return 1;
	return n*factorial(n - 1);
}

int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = factorial(n);
	cout << n << " != " << kq << endl;

	system("pause");
	return 0;
}