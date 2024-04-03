#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = N; i > 0; i--)
	{
		for (int j = i; j <= N; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}