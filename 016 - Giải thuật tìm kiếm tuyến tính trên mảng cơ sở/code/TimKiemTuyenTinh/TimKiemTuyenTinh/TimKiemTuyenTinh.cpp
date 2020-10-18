// TimKiemTuyenTinh.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"
#include "time.h"
using namespace std;

void NhapMang(int [], int );
void XuatMang(int [], int);
int LinearSearch(int[], int, int);


int main()
{
	const int n = 10;
	int M[n];
	NhapMang(M, n);
	cout << "Mang sau khi nhap ngau nhien la: \n";
	XuatMang(M, n);
	int x;
	cout << "\nMoi ban nhap vao so muon tim: ";
	cin >> x;
	int kq = LinearSearch(M, n, x);
	if (kq == -1)
		cout << "Khong thay " << x << " trong mang";
	else
		cout << "Tim thay " << x << " tai vi tri " << kq << endl;
	system("pause");
    return 0;
}

void NhapMang(int M[], int n){
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		M[i] = rand() % 100;
	}
}

void XuatMang(int M[], int n){
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}
}

int LinearSearch(int M[], int n, int x){
	for (int i = 0; i < n; i++) {
		if (M[i] == x)
			return i;
	}
	return -1;
}