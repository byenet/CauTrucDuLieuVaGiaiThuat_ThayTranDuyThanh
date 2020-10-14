// deQuiDaTuyen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void print_array(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}

	cout << endl;
}

void print_permutations(int arr[], int n, int i){
	int j, swap;
	print_array(arr, n);

	for (j = i + 1; j < n; j++) {
		if (arr[i] > arr[j]) {
			swap = arr[i];
			arr[i] = arr[j];
			arr[j] = swap;
		}
		print_permutations(arr, n, i + 1);
	}
}

int main()
{
	int M[3];
	M[0] = 10;
	M[1] = 2;
	M[2] = 5;

	print_permutations(M, 3, 0);
	system("pause");
    return 0;
}

