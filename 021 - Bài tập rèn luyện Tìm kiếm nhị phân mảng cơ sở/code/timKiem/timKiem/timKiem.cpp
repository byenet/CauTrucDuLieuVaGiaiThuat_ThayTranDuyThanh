// timKiem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void NhapMang(int N[], int n);
void XuatMang(int N[], int n);
int BinarySearch(int N[], int n, int x);

int main()
{
	const int n = 3;
	int N[n];
	NhapMang(N, n);
	cout << "Mang sau khi nhap: \n";
	XuatMang(N, n);
	int x;
	cout << "\n Nhap x muon tim: ";
	cin >> x;
	int kq = BinarySearch(N, n, x);
	if (kq == -1) {
		cout << x << " khong co trong mang!" << endl;
	}
	else {
		cout << "Tim thay " << x << " o vi tri " << kq << endl;
	}

	system("pause");
    return 0;
}

void NhapMang(int N[], int n){
	
	for (int i = 0; i < n; i++) {
		cout << "N[" << i << "]= ";
		cin >> N[i];
	}

}

void XuatMang(int N[], int n){
	for (int i = 0; i < n; i++) {
		cout << N[i] << "\t";
	}
}

int BinarySearch(int N[], int n, int x) {
	int left = 0;
	int right = n - 1;
	int mid;
	do {
		mid = (left + right) / 2;
		if (N[mid] == x)
			return mid;
		else if (N[mid] > x)
			left = mid + 1;
		else
			right = mid - 1;

	} while (left <= right);
	return -1;
}