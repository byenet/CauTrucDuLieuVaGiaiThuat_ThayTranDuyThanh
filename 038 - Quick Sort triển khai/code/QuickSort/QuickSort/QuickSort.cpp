// QuickSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

const int N = 20;

void NhapMang(int[], int &);
void XuatMang(int[], int);
void HoanVi(int &, int &);
void QuickSort(int [], int , int );

int main()
{
	int n;
	int M[N];
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	NhapMang(M, n);
	cout << "Mang sau khi nhap la: \n";
	XuatMang(M, n);
	cout << "Mang sau khi sap xep la: " << endl;
	QuickSort(M, 0, n - 1);
	XuatMang(M, n);
	system("pause");
    return 0;
}

void NhapMang(int M[], int &n) {
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

void HoanVi(int &a, int &b){
	int temp;
	temp = b;
	b = a;
	a = temp;
}

void QuickSort(int M[], int left, int right) {
	if (left >= right) return;
	int pivot = M[(left + right) / 2];
	int i = left, j = right;
	do {
		while (M[i] < pivot) i++;
		while (M[j] > pivot) j--;

		if (i <= j) {
			HoanVi(M[i], M[j]);
			i++;
			j--;
		}
	} while (i < j);

	QuickSort(M, left, j);
	QuickSort(M, i, right);
}

