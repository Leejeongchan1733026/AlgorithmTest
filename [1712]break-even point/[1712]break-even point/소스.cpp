#include<iostream>
using namespace std;

int main() {
	int A, B, C, D;
	cin >> A >> B >> C;
	D = C - B;

	if (A == 0 || D == 0) {
		throw logic_error("divison Zero Error");
	}

	else if (B > C)
		cout << "-1";

	else {
		cout << A / D + 1;
	}
}