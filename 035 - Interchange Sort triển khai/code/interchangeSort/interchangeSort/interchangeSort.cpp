// interchangeSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void HoanVi(int &, int &);
void NhapMang(int[], int &);
void XuatMang(int[], int);
void InterchangeSort(int[], int);

const int MS = 10;

int main()
{
	int n;
	int M[MS];
	cout << "Nhap so luong phan tu cua Mang: ";
	cin >> n;
	NhapMang(M, n);
	cout << "Mang sau khi nhap la: " << endl;
	XuatMang(M, n);
	cout << "\nMang sau khi sap xep la: ";
	InterchangeSort(M, n);
	XuatMang(M, n);
	cout << endl;
	system("pause");
    return 0;
}


void HoanVi(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void NhapMang(int M[], int &n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> M[i];
	}
}

void XuatMang(int M[], int n) {
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}
}

void InterchangeSort(int M[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (M[j] < M[i]) {
				HoanVi(M[j], M[i]);
			}
		}
	}
}