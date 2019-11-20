#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x=3.6;
	double e=2.718281;
	double a=pow(e,x-2)+abs(sin(x))-pow(x,4)*cos(1/(x));
	cout<<a; 
}
