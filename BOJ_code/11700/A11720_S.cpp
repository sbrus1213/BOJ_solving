// BOJ 11720 ������ ��
// ����

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, ans = 0; cin >> n;
	while (n--) {
		char c; cin >> c;
		ans += c - '0';
	}
	cout << ans;
}