// Lomuto Partitioning
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int PartitionL(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j <= high - 1; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}

int PartitionRL(int arr[], int low, int high) {
	//srand(time(NULL));
	int random = low + rand() % (high - low + 1);
	swap(arr[random], arr[high]);
	return PartitionL(arr, low, high);
}

void QuickSortLomuto(int arr[], int low, int high) {
	if (low >= high) {
		return;
	}
	else {
		int pi = PartitionRL(arr, low, high);

		QuickSortLomuto(arr, low, pi - 1);
		QuickSortLomuto(arr, pi + 1, high);
	}
}

void PrintfArr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Hoare Partitioning;
int PartitionHoare(int arr[], int low, int high) {
	int pivot = arr[low];
	int i = low - 1;
	int j = high + 1;

	while (true) {
		do {
			i++;
		} while (arr[i] < pivot);
		do {
			j--;
		} while (arr[j] > pivot);
		if (i > j) {
			return j;
		}
		swap(arr[i], arr[j]);
	}
}


int PartitionRHoare(int arr[], int low, int high) {

	int random = low + rand() % (high - low + 1);
	swap(arr[random], arr[low]);
	return PartitionHoare(arr, low, high);
}

void QuickSortHoare(int arr[], int low, int high) {
	if (low < high) {
		int pi = PartitionRHoare(arr, low, high);
		QuickSortHoare(arr, low, pi);
		QuickSortHoare(arr, pi + 1, high);
	}
}


int main() {
	srand(time(NULL));
	int arr[] = { 1, 100 , 5 , 7 , 24 , 32 , 45 , 12 , 22 , 35 };
	int n = sizeof(arr) / sizeof(arr[0]);
	PrintfArr(arr, n);
	QuickSortLomuto(arr, 0, n - 1);
	PrintfArr(arr, n);

	return 0;
}