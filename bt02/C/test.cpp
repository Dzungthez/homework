#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>

using namespace std;
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=n; j++)
		{
			cout << (j >= i ? "*": " ");
		}
		cout << endl;
	}
	return 0;
}