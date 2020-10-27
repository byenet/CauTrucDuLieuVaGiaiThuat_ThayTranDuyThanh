// InsertionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

const int MPT = 10;

void NhapMang(int [], int &);
void XuatMang(int[], int);
void InsertionSort(int[], int );


int main()
{
	int M[MPT];
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	cout << "Nhap mang: " << endl;
	NhapMang(M, n);
	cout << "Mang vua nhap la: ";
	XuatMang(M, n);
	cout << "Mang sau khi sap xep la: ";
	InsertionSort(M, n);
	XuatMang(M, n);
	system("pause");
    return 0;
}

void NhapMang(int M[], int &n){
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> M[i];
	}
}

void XuatMang(int M[], int n){
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}
	cout << endl;
}

void InsertionSort(int M[], int n){
	// luu vi tri can chen
	int pos = 0;
	// luu tru gia tri M[i] tranh bi ghi de khi doi cho cac phan tu.
	int x;
	// xem doan M[0] da duoc sap xep
	for (int i = 1; i < n; i++) {
		x = M[i];
		for (pos = i; (pos > 0) && (M[pos - 1] > x); pos--) {
			M[pos] = M[pos - 1];
		}
		M[pos] = x; // chen x vao day
	}
}