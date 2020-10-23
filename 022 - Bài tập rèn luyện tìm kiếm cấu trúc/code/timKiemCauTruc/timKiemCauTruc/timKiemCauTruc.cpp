// timKiemCauTruc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
using namespace std;

const int SN = 10;

struct Book {
	int ma;
	char ten[150];
	int nam;
};

void NhapDanhSach(Book dsBook[], int &n);
void XuatDanhSach(Book dsBook[], int n);
void TimSachTheoNamXuatBan(Book dsBook[],int n, int year);

int main()
{
	Book dsBook[SN];
	int n;
	cout << "Nhap so sach: ";
	cin >> n;
	NhapDanhSach(dsBook, n);
	cout << "Sach sau khi nhap: \n";
	XuatDanhSach(dsBook, n);

	cout << "\nNhap nam muon tim: ";
	int year;
	cin >> year;
	TimSachTheoNamXuatBan(dsBook, n, year);

	system("pause");
    return 0;
}

void NhapDanhSach(Book dsBook[], int &n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap sach thu " << i << endl;
		cout << "Ma: ";
		cin >> dsBook[i].ma;
		cin.ignore();
		cout << "Ten: ";
		gets_s(dsBook[i].ten);
		cout << "Nam xuat ban: ";
		cin >> dsBook[i].nam;
		cout << endl;
	}
}

void XuatDanhSach(Book dsBook[], int n) {
	for (int i = 0; i < n; i++) {
		Book b = dsBook[i];
		cout << b.ma << "\t" << b.ten << "\t" << b.nam << endl;
	}
}

void TimSachTheoNamXuatBan(Book dsBook[],int n, int year) {
	int SoSachTimDuoc = 0;
	Book dsTimDuoc[SN];

	for (int i = 0; i < n; i++) {
		Book b = dsBook[i];
		if (b.nam == year) {
			dsTimDuoc[SoSachTimDuoc] = b;
			SoSachTimDuoc++;
		}
	}

	if (SoSachTimDuoc == 0) {
		cout << "\nKhong co cuon sach nao co nam xuat ban " << year << endl;
	}
	else {
		cout << "\nCac sach tim thay: \n";
		XuatDanhSach(dsTimDuoc, SoSachTimDuoc);
	}
}