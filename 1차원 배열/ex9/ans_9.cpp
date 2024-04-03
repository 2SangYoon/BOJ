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

	for (int i = 0; i < N; i++)
	{
		A[i] = i + 1;
	}

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;

		for (int j = 0; j < (b - a + 1) / 2; j++)
		{
			int temp;
			temp = A[j + a - 1];
			A[j + a - 1] = A[b - j - 1];
			A[b - j - 1] = temp;
		}

	}

	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}



	return 0;
}