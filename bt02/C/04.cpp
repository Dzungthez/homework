#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>

using namespace std;
int main()
{
	int n; cin >> n;
	for (int i = n-1; i >= 0; i--)
	{
		for (int j = -(n-1); j < n; j++)
		{
			cout << (abs(j) <= i ? "*": " ");
		}
		cout << endl;
	}
	return 0;
}