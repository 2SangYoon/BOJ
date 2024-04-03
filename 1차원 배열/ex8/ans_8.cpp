#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector <int> A(10);

	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		A[i] = num % 42;
	}

	sort(A.begin(), A.end());

	int cnt = 1;

	for (int i = 0; i < 9; i++)
	{
		if (A[i] != A[i + 1])
			cnt++;
	}

	cout << cnt;

	return 0;
}