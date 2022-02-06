#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#define endl "\n";

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n; 
	int m; cin >> m;
	int cnt = 0;

	string* noHeard = new string[n];
	string* noSeen = new string[n];
	string* ans = new string[500000];

	for (int i = 0; i < n; i++) {
		cin >> noHeard[i];
	}
	int idx = 0;
	for (int i = 0; i < m; i++) {
		string temp; cin >> temp;

		string *check = find(noHeard, noHeard + n, temp);
		if (check != noHeard + n) {
			ans[idx] = temp;
			cnt++; idx++;
		}
	}

	cout << cnt << endl;
	for (int i = 0; i < cnt; i++) {
		cout << ans[i] << endl;
	}
}