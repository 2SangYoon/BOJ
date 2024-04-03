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
	vector <int> A(N);

	for (int i = 0; i < N; i++)
		cin >> A[i];

	int target;
	int cnt = 0;
	cin >> target;

	for (int i = 0; i < N; i++)
	{
		if (A[i] == target)
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}