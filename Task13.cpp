#include <iostream>
#include <cmath>
using namespace std;
int main() {
		float a=0.1;
		float b=0.2; 
		float x=1;
	cout<<pow((x*x+b), 0.2) - (b*b*pow(sin(x+a),3))/x;
	return 0;
 
}
