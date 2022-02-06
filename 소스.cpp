#include <iostream>
using namespace std;

static int n;
static int cnt = 0;
static int *arr = new int[20];

void print(int index) {
	cnt++;
	for (int i = 0; i < index; i++) {
		cout << arr[i];
		if (i != index - 1)
			cout << "+";
	}
}

void sol(int n, int sum, int index) {
	for (int i = n; i > 0; i--) {
		if (index == 0) {
			arr[index] = i - 1;
			sol(n - (i - 1), i - 1, index + 1);
		}
		else {
			arr[index] = i;
			if (i <= arr[index - 1])
				sol(n - i, sum + i, index + 1);
		}
	}
	if (n == sum) {
		print(index);
		cout << endl;
	}
}



int main() {
	int n; cin >> n;
	sol(n, 0, 0);
	cout << cnt << endl;
}