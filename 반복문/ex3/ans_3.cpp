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
	int sum = 0;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		sum += i;
	}

	cout << sum;

	return 0;
}