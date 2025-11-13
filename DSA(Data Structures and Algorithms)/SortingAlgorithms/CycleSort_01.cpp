#include <iostream>
using namespace std;
void CycleSort(int arr[] , int n) {
	int write = 0;
	for (int cycle_start = 0; cycle_start < n - 1; cycle_start++) {
		int item = arr[cycle_start];

		int pos = cycle_start;

		for (int i = cycle_start + 1; i < n; i++) {
			if (arr[i] < item) {
				pos++;
			}
		}
		if (pos == cycle_start) {
			continue;
		}
		// bo qua các phần tử trùng lập;
		while (item == arr[pos]) {
			pos++;
		}

		// Đặt item vào đúng vị trí của nó;
		if (pos != cycle_start) {
			swap(arr[pos], item);
			write++;
		}
		while (pos != cycle_start) {
			pos = cycle_start;
			for (int i = cycle_start + 1; i < n; i++) {
				if (arr[i] < item) {
					pos++;
				}
			}
			while (item == arr[pos]) {
				pos += 1;
			}
			if (item != arr[pos]) {
				swap(arr[pos], item);
				write++;
			}
		}
	}
	cout << "So lan ghi or hoan doi : " << write << endl;
}
int main() {
	int arr[] = { 1 , 2 , 100 , 12 , 23 , 3 , 5 , 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	CycleSort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
