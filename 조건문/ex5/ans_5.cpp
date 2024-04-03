#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int h, m;
	cin >> h >> m;

	if ((m - 45) >= 0)
	{
		m -= 45;
		cout << h << " " << m;
	}
	else
	{
		m = ((m - 45) + 60) % 60;
		h = ((h - 1) + 24) % 24;

		cout << h << " " << m;
	}
	return 0;
}