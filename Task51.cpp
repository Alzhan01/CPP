#include <iostream>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if(a==b+c || b==a+c || c==a+b){
		cout<<"YES";
	}
	return 0;
}
