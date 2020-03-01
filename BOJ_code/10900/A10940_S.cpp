// BOJ 10940 BASE16 ���ڵ�
// ���� ��ȯ

#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	for (auto c : s) {
		int x = (int)c / 16;
		if (x < 10) cout << x;
		else cout << (char)(x - 10 + 'A');

		x = (int)c % 16;
		if (x < 10) cout << x;
		else cout << (char)(x - 10 + 'A');
	}
}