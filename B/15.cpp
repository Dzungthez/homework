#include <iostream>
#include <math.h>

using namespace std;
string f(int n){
	if (n == 0) return "a";
	else if (n == 1) return "b";
	return f(n-1) + f(n-2);
}
int main(){
	int n; cin >> n;cout << f(n);
	return 0;
}