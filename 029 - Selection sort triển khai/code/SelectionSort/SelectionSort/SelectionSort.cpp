// SelectionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void NhapMang(int [], int &);
void XuatMang(int[], int);
void SelectionSort(int[], int);
void HoanVi(int &, int &);

const int m = 10;

int main()
{
	int M[10];
	int n;
	cout << "nhap so phan tu cua mang: ";
	cin >> n;
	NhapMang(M, n);
	cout << "Mang sau khi nhap la: " << endl;
	XuatMang(M, n);
	cout << endl;
	cout << "Mang sau khi sap xep: " << endl;
	SelectionSort(M, n);
	XuatMang(M, n);
	cout << endl;

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
}

void HoanVi(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void SelectionSort(int M[], int n) {
	int min;
	for (int i = 0; i < n; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (M[j] < M[min]) {
				min = j;
			}
		}
		if (min != i) {
			HoanVi(M[i], M[min]);
		}
	}

}
