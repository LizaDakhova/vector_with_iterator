#include "Vector.h"
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

Vector input(Vector &v, const size_t n) {
	int value;
	for (int i = 0; i < n; ++i) {
		cin >> value;
		v.push_back(value);
	}
	return v;
}

void print(const Vector &v) {
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << endl;
}

int main() {
	size_t n;
	cin >> n;
	Vector v;
	input(v, n);
	sort(v.begin(), v.end());
	print(v);
	system("pause");
	return 0;
}