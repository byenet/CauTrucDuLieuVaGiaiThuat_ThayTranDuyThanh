// BTTimKiemTuyenTinh.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

void NhapMang(int F[], int n);
void XuatMang(int F[], int n);
int Dem(int F[], int n, int x);
int MaxChan(int F[], int n);
int MaxLe(int F[], int n);

int main()
{
	const int n = 3;
	int F[n];
	NhapMang(F, n);
	cout << "Mang sau khi nhap la: \n";
	XuatMang(F, n);
	cout << endl;
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int d = Dem(F, n, x);
	cout << x << " xuat hien " << d << " lan \n";
	int maxchan = MaxChan(F, n);
	if (maxchan == -99999)
		cout << "Mang khong co so chan" << endl;
	else
		cout << "Max chan: " << maxchan << endl;

	int maxle = MaxLe(F, n);
	if (maxle == -99999)
		cout << "Mang khong co so le" << endl;
	else
		cout << "Max le: " << maxle << endl;
	

	system("pause");
    return 0;
}

void NhapMang(int F[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap gia tri phan tu thu " << i << ": ";
		cin >> F[i];
	}
}

void XuatMang(int F[], int n){
	for (int i = 0; i < n; i++) {
		cout << F[i] << "\t";
	}
}

int Dem(int F[], int n, int x) {
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (F[i] == x)
			d++;
	}
	return d;
}

int MaxChan(int F[], int n) {
	int max = -99999;
	for (int i = 0; i < n; i++) {
		if (F[i] > max && F[i]%2==0) 
			max = F[i];
	}
	return max;
}

int MaxLe(int F[], int n) {
	int max = -99999;
	for (int i = 0; i < n; i++) {
		if (F[i] > max && F[i] % 2 != 0)
			max = F[i];
	}
	return max;
}