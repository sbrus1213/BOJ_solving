// BOJ 5554 �ɺθ� ���� ��
// ����

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c, d; cin >> a >> b >> c >> d;
	cout << (a + b + c + d) / 60 << '\n' << (a + b + c + d) % 60;;
}