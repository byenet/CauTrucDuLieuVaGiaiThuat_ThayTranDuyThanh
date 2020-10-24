// BubbleSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "time.h"
#include "stdlib.h"
using namespace std;

const int N = 10;

void NhapMang(int[], int &);
void XuatMang(int[], int );
void HoanVi(int &, int &);
void BubbleSort(int[], int);

int main()
{
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	int M[N];
	NhapMang(M, n);
	cout << "Mang sau khi sinh random: \n";
	XuatMang(M, n);
	cout << "Mang sau khi sap xep la: \n";
	BubbleSort(M, n);
	XuatMang(M, n);
	system("pause");
    return 0;
}

void NhapMang(int M[], int &n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		M[i] = rand() % 100;
	}
}

void XuatMang(int M[], int n) {
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}
	cout << endl;
}

void HoanVi(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int M[], int n){
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (M[j] < M[j - 1]) {
				HoanVi(M[j], M[j - 1]);
			}
		}
	}
}