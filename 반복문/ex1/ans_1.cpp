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

	for (int i = 1; i < 10; i++)
	{
		cout << N << " * " << i << " = " << N * i << "\n";
	}

	return 0;
}