#include <iostream>
using namespace std;
int main(){
	double x,a,y,k;
	cin>>x;
	cin>>a;
	cin>>y;
	cin>>k;
	cout<<y<<" Killogramm stoyat "<<a/x*y<<" Rublei"<<endl;
	cout<<"Za "<<k<<" Rublei mojno kupit' "<<k/(a/x)<<" Kilogramm konfet";
	return 0;
}
