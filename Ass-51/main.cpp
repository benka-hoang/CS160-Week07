// 25125031
// Hoang Thien Nhan
// 25A01

#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n = 5;
	// Initalize dynamic array of size n
	int* arr = new int[n];

	// Program:
	cout << "Hey! Input for the program " << n << " integer numbers : ";
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	cout << "Print numbers : ";
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	
	cout << "Print sum : ";
	long long sum = 0;
	for (int i = 0; i < n; ++i) sum = sum + arr[i];
	cout << sum << '\n';

	cout << "Largest value : ";
	int Max = arr[0], pos = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] > Max) {
			Max = arr[i];
			pos = i;
		}
	}
	cout << Max << "\n";

	cout << "Numbers after delete : ";
	for (int i = pos; i < n - 1; ++i) arr[i] = arr[i + 1];
	--n;
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";

	int p, x;
	cout << "Which position you want to Insert and Value : "; cin >> p >> x;
	for (int i = n; i > pos; --i) arr[i] = arr[i - 1];
	arr[p] = x;
	++n;
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";

	cout << "Reverse array : ";
	for (int i = 0; i < n / 2; ++i) swap(arr[i], arr[n - i - 1]);
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";

	return 0;
}