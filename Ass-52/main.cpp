// 25125031
// Hoang Thien Nhan
// 25A01

#include<iostream>

using namespace std;

int* DoubleArraySize(int* a, int n) {
	int* A = new int[2 * n];
	for (int i = 0; i < 2 * n; ++i) if (i < n) {
		A[i] = a[i];
	}
	else
		A[i] = 0;
	return A;
}

int main() {
	// This program include a function which help you to double the size of your array
	// An example:
	int n, *a = nullptr;
	cout << "Input size of your array : "; cin >> n;
	a = new int[n];
	cout << "Input the values : ";
	for (int i = 0; i < n; ++i) cin >> a[i];
	int *A = DoubleArraySize(a, n);
	cout << "Your new array : ";
	for (int i = 0; i < 2 * n; ++i) cout << A[i] << " ";
	cout << "\n";
	return 0;
}