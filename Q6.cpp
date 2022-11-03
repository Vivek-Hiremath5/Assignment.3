#include<iostream>
#include<string>
using namespace std;
int main() {
	int c, s,p,l;
	cout << "Enter the cost price ";
	cin >> c;
	cout << "Enter the selling price ";
	cin >> s;
	if (c < s) {
		p = s - c;
		cout << "PROFIT = " << p;
	}
	else {
		l = c - s;
		cout << "LOSS = " << l;
	}
}
