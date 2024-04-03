#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector <int> A(N);
	A[0] = 0;

	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		for (int j = a - 1; j < b; j++)
		{
			A[j] = c;
		}

	}
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}



	return 0;
}