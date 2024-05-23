#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int size1 = 10;
	const int size2 = 5;
	int arr1[size1];
	int arr2[size2];
	int arr3[size2];
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % 10 - 5;
		arr3[i] = rand() % 10 - 5;
	}
	for (int i = 0; i < size2; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size2; i++) {
		cout << arr3[i] << " ";
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size2; i++) {
		if (arr2[i] > 0) {
			arr1[k++] = arr2[i];
		}
		if (arr3[i] > 0) {
			arr1[k++] = arr3[i];
		}
	}
	for (int i = 0; i < size2; i++) {
		if (arr2[i] == 0) {
			arr1[k++] = arr2[i];
		}
		if (arr3[i] == 0) {
			arr1[k++] = arr3[i];
		}
	}
	for (int i = 0; i < size2; i++) {
		if (arr2[i] < 0) {
			arr1[k++] = arr2[i];
		}
		if (arr3[i] < 0) {
			arr1[k++] = arr3[i];
		}
	}
	for (int i = 0; i < size1; i++) {
		cout << arr1[i] << " ";
	}

	return 0;
}