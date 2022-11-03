#include<iostream>
#include<string>
using namespace std;
int main() {
	int l,i,sum=0;
	cout << "Enter a number";
	cin >> i;
	string s;
	s = to_string(i);
	l = s.length();
	//cout << s<<endl;
		int* a;
		a = new int[s.length()];
		for (int i = 0; i < s.length(); i++) {
			a[i] = s[l-i-1] - 48;
		}
		if (s.length() <= 5) {
			for (int j = 0; j < s.length(); j++) { cout << a[j]; }
		}
	else cout << "Invalid Inout";
	delete[] a;
}

