//Trên bàn cờ vua 
//8×8, mỗi bên sở hữu hai quân mã(knights).
//Tim cách di chuyển của quân mã trên bàn cờ giống hình chữ L ?
// Sao cho quân mã di chuyển qua tất cae các ô trên bàn cờ ? ( 1<=n<=10 );
#include <iostream>
using namespace std;
int tmp = 1 , n;
int a[100][100];
int BNhay[8][2] =
{
	{ -1, -2},
	{-2, -1 },
	{ -2, 1},
	{ -1, 2},
	{1, 2 },
	{2, 1},
	{2, -1 },
	{1, -2}
};
void InKQ() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

bool Check_NextXY(int next_x, int next_y) {
	return (next_x > 0 && next_y > 0 && next_x <= n && next_y <= n && !a[next_x][next_y]);
}

void Try(int n ,int x, int y) {
	a[x][y] = tmp;
	if (tmp == n * n) {
		InKQ();
		exit(0);
	}
	for (int j = 0; j <= 7; j++) {
		int next_x = x + BNhay[j][0], next_y = y + BNhay[j][1];
		if (Check_NextXY(next_x, next_y)) {
			++tmp;
			Try(n , next_x, next_y);
			a[next_x][next_y] = 0;
			--tmp;
		}
	}
}


int main() {
	memset(a, 0, sizeof(a));
	cout << "Nhap n tu ban phim : ";
	cin >> n;
	
	if (n == 1) {
		cout << -1;
		return 0;
	}
	Try(n, 1, 1);
	
	return 0;
}

