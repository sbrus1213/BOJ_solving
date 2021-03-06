// BOJ 15650 N�� M (2)
// Backtracking

#include <iostream>
#include <vector>
using namespace std;

bool used[10];
vector<int> ans;

void n_m(int n, int m, int k) {
	if (ans.size() == m) {
		for (int x : ans)
			cout << x << ' ';
		cout << '\n';
		return;
	}

	for (int i = k; i <= n; ++i) {
		if (used[i]) continue;
		ans.push_back(i); used[i] = true;
		n_m(n, m, i + 1);
		ans.pop_back(); used[i] = false;
	}
}
int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	n_m(n, m, 1);
}