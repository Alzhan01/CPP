#include <iostream>
#include <cmath>
using namespace std;
int main(){
    for ( int i = 1; i <= 9999; i++){
        if ( (i % 11 == 0) and (i % 2 == 1) and (i % 3 == 1) and (i % 5 == 1) and (i % 7 == 1)){
            cout << i << " ";
        }
    }
    cout<<endl;
}
