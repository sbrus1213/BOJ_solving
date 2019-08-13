// BOJ 12865 ����� �賶
// Dynamic Programming - Knapsack

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, k, weight[101], value[101], dp[100'001] = {};

	cin >> n >> k;

	for (int i = 0; i < n; ++i) cin >> weight[i] >> value[i];

	/* 1�� - ���������� ��ȿ������ ��� -
		����) �ٷ� ���� �ܰ��� dp���� �����ϸ� �ǹǷ� �׸�ŭ ����� ���� �� ����
	int dp[101][100001] = {};

	dp[0][weight[0]] = value[0];
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j <= k; ++j) {
			dp[i][j] = dp[i - 1][j];
			if (j >= weight[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - weight[i]] + value[i]);
		}
	}*/
	/* 2�� - ������ ���� ���� ��� - �ٷ� �����ܰ踸 �����ؼ� dp ���� -
		����) dp[i][j]�� ���ܰ�κ��� ���� ����� j���� ���� k�� ���� dp[i-1][j] �Ǵ� dp[i-1][k]�ۿ� ����.
		�׷��Ƿ� ���� 2������ �ʿ䵵 ���� 1�������� �ؼ� dp[i][k]���� dp[i][0] ������ ä��������
		+ ���ǹ��� �ʿ� �������� j ���� k���� weight[i] ������ üũ�ϸ� ��.
	int dp[2][100001] = {};

	dp[0][weight[0]] = value[0];
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j <= k; ++j) {
			dp[i & 1][j] = dp[(i - 1) & 1][j];
			if (j >= weight[i]) dp[i & 1][j] = max(dp[i & 1][j], dp[(i - 1) & 1][j - weight[i]] + value[i]);
		}
	}*/
	dp[weight[0]] = value[0];
	for (int i = 1; i < n; ++i)
		for (int j = k; j >= weight[i]; --j)
			dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);

	int res = 0;
	for (int i = 0; i <= k; ++i)
		res = max(res, dp[i]);

	cout << res;
}