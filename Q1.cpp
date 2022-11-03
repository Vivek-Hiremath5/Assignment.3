#include<iostream>
using namespace std;
int main() {
	int n, s, sum = 0, count = 0;
	cout << "Enter a number " << endl;
	cin >> n;
	while (n > 0) {
		s = n % 10;
		sum += s;
		n = n / 10;
		count++;
	}
	if (count < 6) {
		cout << "The sum is " << sum << endl;
	}
	else cout << "Invalid Input" << endl;
}