#include<iostream>
using namespace std;
int main() {
	int n,a,k,e;
	cout << "Enter the number of elements in list" << endl;
	cin >> n;
	cout << "Enter the value of k" << endl;
	cin >> k;
	cout << "Enter the elements of list" << endl;
	int* l;
	l = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> l[i];
	}
	int* b;
	b = new int[n];
	for (int i = 0; i < n; i++) {
		b[i] = l[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (b[i] < b[j]) {
				a = b[j];
				b[j] = b[i];
				b[i] = a;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (l[i] == b[k-1]) {
			e = i;
		}
	}
	cout << "The " << k << " th/nd/rd smallest element in the lsit is " << l[e] << " at position " << e+1 << endl;
}
