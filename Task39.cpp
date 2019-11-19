#include <iostream>
using namespace std;
int main(){
	double a;
	double b;
	cin>>a>>b;
	if(a>b){
		cout<<"Yes";
	}
	else{
	swap(a,b);
	cout<<a<<" "<<b;
	}
    return 0;
}
