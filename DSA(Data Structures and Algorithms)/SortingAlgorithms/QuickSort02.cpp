#include <vector>
#include <iostream>
#include <time.h>
#include <random>
using namespace std;
	//  Chon random la pivot su dung phan vung lomuto.
int Partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;

	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			++i;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i+1;
}


int Partition_r(int arr[], int low, int high) {
	int random = low + rand() % (high - low + 1);
	swap(arr[random], arr[high]);
	
	return Partition(arr, low, high);
}


void QuickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = Partition_r(arr , low , high);
		
		QuickSort(arr, low, pi - 1);
		QuickSort(arr, pi + 1, high);
	}
}

void PrintfArray(int arr[] , int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	srand(time(NULL));
	int arr[] = { 10 , 5 , 8 , 9 , 2 , 5 ,3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr, 0, n-1);
	PrintfArray(arr, n);
	return 0;
}