#include<iostream>
using namespace std;
int main() {
	int n,r1,x1,y1;
	cout << "Enter the nuber of circles" << endl;
	cin >> n;
	int* x;
	x = new int[n];
	int* y;
	y = new int[n];
	int* r;
	r = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter the co-erdinates of circle" << endl;
		cin >> x[i] >> y[i];
		cout << "Enter the radius of this circle" << endl;
		cin >> r[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (r[i] > r[j]) {
				r1 = r[i];
				r[i] = r[j];
				r[j] = r1;
				x1 = x[i];
				x[i] = x[j];
				x[j] = x1;
				y1 = y[i];
				y[i] = y[j];
				y[j] = y1;
			}
		}
	}
	cout << "The ascending order of cricles as per area is" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Co-ordinates " << x[i] << " " << y[i] << " radius " << r[i] << endl;
	}
}

