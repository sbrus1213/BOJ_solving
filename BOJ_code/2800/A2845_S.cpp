// BOJ 2845 ��Ƽ�� ������ �� ��
// ����

#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int l, p, s; cin >> l >> p; s = l * p;
	for (int i = 0; i < 5; ++i) {
		int x; cin >> x;
		cout << x - s << ' ';
	}
}