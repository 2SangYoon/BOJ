#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int h, m, time;

	cin >> h >> m >> time;

	if ((m + time) / 60 > 0)
	{
		h = (h + (m + time) / 60) % 24;
		m = (m + time) % 60;
		cout << h << " " << m;
	}
	else
	{
		m += time;
		cout << h << " " << m;
	}
	return 0;
}