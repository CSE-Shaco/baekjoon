#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x1, y1, r1, x2, y2, r2;
	for (int i = 0; i < n; ++i) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		if (d == 0 && r1 == r2) {
			cout << -1 << '\n';
		}
		else if (d > r1 + r2 || d < abs(r1 - r2)) {
			cout << 0 << '\n';
		}
		else if (d == r1 + r2 || d == abs(r1 - r2)) {
			cout << 1 << '\n';
		}
		else {
			cout << 2 << '\n';
		}
	}
	
	return 0;
}
