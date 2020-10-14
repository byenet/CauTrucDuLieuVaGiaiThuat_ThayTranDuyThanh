// deQuiNhiPhan.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int fib(int n) {
	if (n <= 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}


int main()
{
	int n = 6;
	int kq = fib(n);
	cout << kq << endl;
	system("pause");
    return 0;
}

