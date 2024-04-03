#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int flag = 0;

	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (cin.eof() == true)
			break;
		cout << a + b << "\n";

	}

	return 0;
}