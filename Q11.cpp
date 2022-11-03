#include<iostream>
#include<algorithm>
#include<set>
#include<iterator>
#include<vector>
using namespace std;
int main() {
	int n, m, s, count = 0, count2 = 0;
	vector<int> a;
	vector<int> b;
	vector<int> c;
	vector<int> d;
	cout << "Enter the number of elements in set A and set B respectively" << endl;
	cin >> n >> m;
	cout << "Enter the elements of set A" << endl;
	for (int i = 1; i <= n; i++) {
		cin >> s;
		a.push_back(s);
	}
	cout << "Enter the elements of set B" << endl;
	for (int i = 0; i < m; i++) {
		cin >> s;
		b.push_back(s);
	}
	//for (int i = 0; i < n; i++) {
	//	cout << a[i] << endl;
	//}
	//for (int i = 0; i < m; i++) {
	//	cout << b[i] << endl;
	//}
	if (n > m) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (a[j] == b[i]) {
					s = a[j];
					c.push_back(s);
					count++;
				}
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] == b[j]) {
					s = a[i];
					c.push_back(s); count++;
				}
			}
		}
	}
	cout << "The intersection is" << endl;
	for (int i = 0; i < count; i++) {
		cout << c[i] << endl;
	}
	if (n > m) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (a[j] == b[i]) {
					s = a[j];
					a[j] = a[n-count2-1];
					a[n-count2-1] = s;
					count2++;
					i++;
				}
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] == b[j]) {
					s = a[i];
					a[i] = a[n-count2-1];
					a[n - count2-1] = s;
					count2++;
					i++;
				}
			}
		}
	}
	for (int i = 0; i < m; i++) {
		s = b[i];
		d.push_back(s);
	}
	for (int i = 0; i < n - count ; i++) {
		s = a[i];
		d.push_back(s);
	}
	cout << "The Union set is" << endl;
	for (int i = 0; i < m + n - count; i++) {
		cout << d[i] << endl;
	}
}