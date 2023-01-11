#include <iostream>

using namespace std;

int main() {
	int hour = -1, min = -1, sec = -1;
	while ((hour < 0) or (hour > 23)) {
		cout << "Type hours : ";
		cin >> hour;
	}
	while ((min < 0) or (min > 59)) {
		cout << "Type minutes : ";
		cin >> min;
	}
	while ((sec < 0) or (sec > 59)) {
		cout << "Type seconds : ";
		cin >> sec;
	}
	cout << "Seconds: " << hour * 3600 + min * 60 + sec;
	cin.get();
	cin.get();
	return 0;
}
