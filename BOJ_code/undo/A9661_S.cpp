// BOJ 9661 �� ���� 7
// game theory & nim game

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);

	long long n; cin >> n;
	if (n % 5 == 0 || n % 5 == 2) cout << "CY";
	else cout << "SK";
}