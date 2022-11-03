#include<iostream>
#include<string>
using namespace std;
int main() {
	int l,i,sum=0;
	cout << "Enter a number";
	cin >> i;
	string s,n,d;
	s = to_string(i);
	l = s.length();
	//cout << s<<endl;
		int* a;
		a = new int[s.length()];
		for (int i = 0; i < s.length(); i++) {
			a[i] = s[l-i-1] - 48;
		}
		if (s.length() <= 5) {
			
			for (int k = 0; k < s.length(); k++) {
				d = to_string(a[k]);
				cout << d;
			}
			cout << endl;
			if (d > s) {
				cout << "M is greater than N";
			}
			else cout << "N is greater than M";
		}
	else cout << "Invalid Inout";
	delete[] a;
}
