// Phân vùng Hoare
#include <iostream>
#include <time.h>
#include <random>
using namespace std;
int Partition_Hoare(int arr[], int low, int high) {
	int pivot = arr[low];
	int i = low - 1;
	int j = high + 1;
	while (true) {
		do {
			++i;
		} while(arr[i] < pivot );

		do {
			--j;
		} while (arr[j] > pivot);

		if (i > j) return j;
		swap(arr[i], arr[j]);
	}
}
int Partition_R(int arr[], int low, int high) {
	
	int random = low + rand() % (high - low + 1);
	swap(arr[random], arr[low]);
	return Partition_Hoare(arr, low , high);
}

void Quick_Sort(int arr[], int low, int high) {
	if (low < high) {
		int pi = Partition_R(arr, low, high);
		Quick_Sort(arr, low, pi);
		Quick_Sort(arr, pi + 1, high);
	}
}

void Printf_Array(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {
	srand(time(NULL));
	int arr[] = { 2 , 3 , 10 , 11 , 23 , 1 , 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "\n Mang truoc khi xap sep la :\n";
	Printf_Array(arr, n);
	Quick_Sort(arr, 0, n - 1);
	cout << "Mang sau khi xap sep la : \n";
	Printf_Array(arr, n);
	return 0;
}