// timKiemNhiPhan.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string.h"
using namespace std;

struct SanPham
{
	int ma;
	char ten[20];
	float gia;
};

void NhapDanhSach(SanPham dsSp[], int n);
void XuatDanhSach(SanPham dsSp[], int n);
SanPham * TimSanPham(SanPham dsSp[], int n, float giatim);


int main()
{
	const int n = 2;
	SanPham dsSp[n];
	NhapDanhSach(dsSp,n);
	cout << "\nSan pham sau khi nhap: \n";
	XuatDanhSach(dsSp, n);
	float giatim;
	cout << "\nNhap gia muon tim: ";
	cin >> giatim;
	SanPham *sp = TimSanPham(dsSp, n, giatim);

	if (sp == NULL)
		cout << "khong thay san pham co gia " << giatim << endl;
	else
		cout << sp->ma << "\t" << sp->ten << "\t" << sp->gia << endl;

	system("pause");
    return 0;
}

void NhapDanhSach(SanPham dsSp[], int n){
	for (int i = 0; i < n; i++) {
		cout << "Nhap san pham thu " << i << endl; 
		cout << "Ma: ";
		cin >> dsSp[i].ma;
		cin.ignore();
		cout << "Ten: ";
		gets_s(dsSp[i].ten);
		cout << "gia: ";
		cin >> dsSp[i].gia;
	}
}

void XuatDanhSach(SanPham dsSp[], int n){
	
	for (int i = 0; i < n; i++) {
		SanPham sp = dsSp[i];
		cout << sp.ma << "\t" << sp.ten << "\t" << sp.gia << endl;
	}
}

SanPham * TimSanPham(SanPham dsSp[], int n, float giatim) {
	int left = 0;
	int right = n - 1;
	int mid = 0;
	do {
		mid = (left + right) / 2;
		SanPham sp = dsSp[mid];

		if (sp.gia == giatim)
			return &sp;
		else if (sp.gia > giatim)
			right = mid - 1;
		else
			left = mid + 1;

	} while (left <= right);
	return NULL;

}