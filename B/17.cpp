#include <iostream>
#include <math.h>

using namespace std;
bool LeapYear(int n){
	if (n % 4 != 0 ) return false;
	else if (n % 4 == 0 && n%100 != 0) return true;
	else if (n%100 == 0 && n % 400 != 0) return false;

}
int main(){
	int n; cin >> n; cout << LeapYear(n);


	return 0;
}
