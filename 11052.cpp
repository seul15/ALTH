#include <iostream>
using namespace std;

int* acc;
int* res;

int Bigger(int a, int b) {
	if (a > b)
		return a;
	return b;
}

void sol(int n) {
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			res[i] = Bigger(res[i], res[i - j] + acc[j]);
		}
	}
	cout << res[n] << endl;
}

int main() {
	int n;
	cin >> n;
	acc = new int[n + 1];
	res = new int[n + 1];
	acc[0] = res[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> acc[i];
	}

	sol(n);

	return 0;
}

/*
K개가 있는 카드팩을 하나 구매한다고 가정했을 때, 그 전에 N-K개의 카드를 구매해야 함
즉 res[N-K] + acc[K]가 res[N]의 값이 된다. 
*/