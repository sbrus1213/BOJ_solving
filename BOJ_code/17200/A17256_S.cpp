// BOJ 17256 �޴����� �����귯
// ���� ����

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int ax, ay, az, bx, by, bz;
	cin >> ax >> ay >> az >> bx >> by >> bz;
	cout << bx - az << ' ' << by / ay << ' ' << bz - ax;
}