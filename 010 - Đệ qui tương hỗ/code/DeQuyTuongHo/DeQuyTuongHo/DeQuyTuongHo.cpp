// DeQuyTuongHo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

bool isEven(int);
bool isOdd(int);



int main()
{
	int n1 = 8;
	bool kq = isEven(n1);
	if (kq == true)
		cout << n1 << " la so chan" << endl;
	else
		cout << n1 << "  la so le" << endl;


	system("pause");
    return 0;
}

bool isEven(int n){
	
	if (n == 0)
		return true;
	else
		return isOdd(n - 1);
}

bool isOdd(int n){
	return !isEven(n);
}