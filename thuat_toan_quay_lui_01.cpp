
//Chinh hop chap k cua n khong lap;
#include <iostream>
using namespace std;
int n,k , x[101], use[101];

void InKQ() {
	for (int i = 1; i <= k; i++) {
		cout << x[i];
	}
	cout << endl;
}

void Try( int i) {
	for (int j = 1; j <= n; j++) {
		if (use[j] == 0) {
			x[i] = j;
			use[j] = 1;
			if (i == k) {
				InKQ();
			}
			else {
				
				Try(i + 1);
			}
			// back_track
			use[j] = 0;
		}
	}
}
int main() {
	memset(use, 0, sizeof(use));
	cout << "Nhap k va n tu ban phim :";
	cin >> k >> n;
	Try(1);
	return 0;
}
