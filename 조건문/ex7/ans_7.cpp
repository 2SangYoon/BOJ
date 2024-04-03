#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	int result = 0;
	cin >> a >> b >> c;

	if ((a == b) && (a == c))
	{
		result = 10000 + a * 1000;
	}
	else if (a == b)
	{
		result = 1000 + a * 100;
	}
	else if (b == c)
	{
		result = 1000 + b * 100;
	}
	else if (a == c)
	{
		result = 1000 + a * 100;
	}
	else
	{
		int temp = 0;
		temp = max(max(a, c), max(b, c));
		result = temp * 100;
	}

	cout << result;


	return 0;
}