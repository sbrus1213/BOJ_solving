// BOJ 15964 �̻��� ��ȣ
// ����

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long a, b; cin >> a >> b;
	cout << (a + b) * (a - b);
}