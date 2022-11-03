#include<iostream>
#include<string>
using namespace std;
int main() {
	int n,count,count2=0;
	cout << "Enter the number of elements ";
	cin >> n;
	cout << "Enter the elements of list";
	int* a;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] < a[j]) {
				i = j;
				count2 = j;
			}
		}
		i++;
	}
	cout << "The largest number is " << a[count2] << " at position " << count2 +1<< endl;
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < n; j++) {
				if (a[i] > a[j]) {
					i = j;
					count = j;
				}
		}
		i++;
	}
	cout << "The smallest number is " << a[count] << " at position " << count + 1;
	delete[] a;
}