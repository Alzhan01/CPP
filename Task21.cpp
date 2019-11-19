#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	cout<<"Area = "<<(a*b)/2<<endl<<"Perimeter = "<<a+b+sqrt(pow(a,2)+pow(b,2))<<endl<<"Hypotenuse = "<<sqrt(pow(a,2)+pow(b,2));
    return 0;
}
