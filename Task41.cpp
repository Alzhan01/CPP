#include <iostream>
using namespace std;
int main(){
	double a;
	cin>>a;
	if(a>-100 && a<100){
		a=a*0;
		cout<<a;
	}
	else{
	cout<<a+1;
	}
    return 0;
}
