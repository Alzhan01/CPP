#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n,a,b,c,d;
	cin >> n;
	d=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	a=n;
	if(a==b || a==c || a==d || b==c || b==d || c==d){
		cout<<"Yes";
	}
}
