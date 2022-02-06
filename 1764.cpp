#include <iostream>
#include <string>
#include <set>
using namespace std;
#define endl "\n";

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int cnt = 0;

	int n; int m; cin >> n >> m;
	set<string> input;
	for (int i = 0; i < n + m; i++) {
		string temp; cin >> temp;
		input.insert(temp);
	}
	cnt = input.size();

	cout << cnt << endl;
	for (string loop : input) {
		cout << loop << endl;
	}
}