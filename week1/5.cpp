//https://rebas.kr/761
#include <iostream>
using namespace std;
int n, ans = 0;
bool a[14], b[27], c[27];

void dfs(int i) {
	if (i == n) {
		ans++;
		return;
	}
	for (int j = 0; j < n; j++) {
		if (!a[j] && !b[i + j] && !c[i - j + n - 1]) {
			a[j] = b[i + j] = c[i - j + n - 1] = true;
			dfs(i + 1);
			a[j] = b[i + j] = c[i - j + n - 1] = false;
		}
	}
}

int main() {
	cin >> n;
	dfs(0);
	cout << ans <<endl;
	return 0;
}
