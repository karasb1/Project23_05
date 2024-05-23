#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int size = 20;
	int arr[size];

	int k = 0;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 - 5;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < size; ++i) {
		if (arr[i] != 0) {
			arr[k++] = arr[i];
		}
	}
	for (int i = k; i < size; ++i) {
		arr[i] = -1;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}