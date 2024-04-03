#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double x, y;

	cin >> x >> y;

	if ((x > 0) && (y > 0))
	{
		cout << "1";
	}
	else if ((x < 0) && (y > 0))
	{
		cout << "2";
	}
	else if ((x < 0) && (y < 0))
	{
		cout << "3";
	}
	else
	{
		cout << "4";
	}

	return 0;
}