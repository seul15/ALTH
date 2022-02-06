#include <iostream>
#include <string>
#include <set>
#include <utility>
using namespace std;
#define endl "\n";

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 0;

	int n; int m; cin >> n >> m;
	set<string> input;
	set<string> ans;

	for (int i = 0; i < n + m; i++) {
		string temp; cin >> temp;
		auto pair = input.insert(temp);
		if (pair.second == false) {
			ans.insert(*(pair.first));
			cnt++;
		}
	}

	cout << cnt << endl;
	for (auto loop : ans) {
		cout << loop << endl;
	}
}