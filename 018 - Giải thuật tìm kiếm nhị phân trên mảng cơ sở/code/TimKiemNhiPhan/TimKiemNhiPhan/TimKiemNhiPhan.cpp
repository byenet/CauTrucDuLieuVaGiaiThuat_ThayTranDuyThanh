// TimKiemNhiPhan.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
int BSearch(int M[], int n, int x);
int BSearchRecur(int M[], int x, int left, int right);

int main()
{
	const int n = 5;
	int M[n];
	NhapMang(M, n);
	cout << "Mang sau khi nhap:\n";
	XuatMang(M, n);
	cout << "\nNhap so muon tim: ";
	int x;
	cin >> x;
	int kq = BSearch(M, n, x);
	if (kq == -1)
		cout << "Khong thay " << x << "\n";
	else
		cout << "Thay " << x << " o vi tri thu " << kq << "\n";

	cout << "\nNhap so muon tim theo de quy: ";
	int x2;
	cin >> x2;
	int kq2 = BSearchRecur(M, x2, 0, n-1);
	if (kq2 == -1)
		cout << "Khong thay " << x2 << "\n";
	else
		cout << "Thay " << x2 << " o vi tri thu " << kq2 << "\n";

	system("pause");
    return 0;
}

void NhapMang(int M[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "M[" << i << "]=";
		cin >> M[i];
	}

}

void XuatMang(int M[], int n){
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}
}

int BSearch(int M[], int n, int x){

	int left = 0;
	int right = n - 1;
	int mid;
	do {
		mid = (left + right) / 2;
		if (M[mid] == x)
			return mid;
		else if (M[mid] > x)
			right = mid - 1;
		else
			left = mid + 1;
	} while (left <= right);

	return -1;
}

int BSearchRecur(int M[], int x, int left, int right){
	if (left > right)
		return -1;
	int mid = (left + right) / 2;
	if (M[mid] == x)
		return mid;
	if (M[mid] > x)
		return BSearchRecur(M, x, left, mid - 1);
	else
		return BSearchRecur(M, x, mid + 1, right);

}