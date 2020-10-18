// TimKiem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string.h"
using namespace std;

struct SinhVien {
	char ma[10];
	char ten[150];
	bool gioitinh;
};

void NhapDanhSach(SinhVien dsSV[], int siso);
void XuatDanhSach(SinhVien dsSV[], int siso);
SinhVien * TimSinhVienTheoMa(SinhVien dsSV[], int siso, char matim[]);


int main()
{
	const int siso = 3;
	SinhVien dsSV[siso];
	NhapDanhSach(dsSV, siso);
	cout << "Danh sach sinh vien sau khi nhap: \n";
	XuatDanhSach(dsSV, siso);
	char matim[10];
	cout << "\nNhap ma muon tim: ";
	gets_s(matim);
	SinhVien *pSv = TimSinhVienTheoMa(dsSV, siso, matim);
	if (pSv == NULL) {
		cout << "\n Khong tim thay ma " << matim << endl;
	}
	else {
		cout << "Tim thay sinh vien co ma " << matim << endl;
	}

	cout << "Moi ban nhap gioi tinh (m/f): ";
	char gttim[2];
	gets_s(gttim);
	for (int i = 0; i < siso; i++) {
		bool gttimbool = true; // Nu
		if (strcmp(gttim, "f"))
			gttimbool = false; // Nam
		if (dsSV[i].gioitinh == gttimbool) {
			cout << dsSV[i].ma << "\t" << dsSV[i].ten << "\t" << (dsSV[i].gioitinh == true ? "Nu" : "Nam") << endl;
		}
	}

	system("pause");
    return 0;
}

void NhapDanhSach(SinhVien dsSV[], int siso) {
	for (int i = 0; i < siso; i++) {
		cout << "Nhap ma: ";
		gets_s(dsSV[i].ma);
		cout << "Nhap ten: ";
		gets_s(dsSV[i].ten);
		cout << "Gioi tinh(m/f): ";
		char gt[2];
		gets_s(gt);
		if (strcmp(gt, "m") == 0)
			dsSV[i].gioitinh = false;
		else
			dsSV[i].gioitinh = true;
	}
}


void XuatDanhSach(SinhVien dsSV[], int siso) {
	for (int i = 0; i < siso; i++) {
		cout << dsSV[i].ma << "\t" << dsSV[i].ten << "\t" << (dsSV[i].gioitinh == true ? "Nu" : "Nam") << endl;
	}
}

SinhVien * TimSinhVienTheoMa(SinhVien dsSV[], int siso, char matim[]){
	for (int i = 0; i < siso; i++) {
		if (strcmp(dsSV[i].ma, matim) == 0) {
			return &dsSV[i];
		}
	}
	return NULL;
}