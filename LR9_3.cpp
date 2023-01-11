#include <iostream>

using namespace std;

int main() {
	int s = 0, p = 1, val = 1;
	while (val != 0) {
		cout << "Enter the value: ";
		cin >> val;
		if ((val > 10) and (val < 25)) {
			s += val;
		}
		if (val > 15) {
			p *= val;
		}
	}
	if (s < p) {
		cout << "Sum: " << s;
	}
	else {
		cout << "Multiplying: " << p;
	}
	cin.get();
	cin.get();
	return 0;
}
