#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n,a,b,c;
	cin >> n;
	c=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	a=n;
	cout << c << b << a;
}
