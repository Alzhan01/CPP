#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n,a,b,c,d,e;
	cin >> n;
	e=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	a=n;
	if(a%2==0){
        a=a*0;
	}
	if(b%2==0){
		b=b*0;
	}
	if(c%2==0){
		c=c*0;
	}
	if(d%2==0){
		d=d*0;
	}
	if(e%2==0){
		e=e*0;
	}
	cout<<a<<b<<c<<d<<e;
}
