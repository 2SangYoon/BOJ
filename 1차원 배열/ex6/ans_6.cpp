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
		int a, b, tmp;
		cin >> a >> b;
		tmp = A[a - 1];
		A[a - 1] = A[b - 1];
		A[b - 1] = tmp;
	}

	for (int i = 0; i < N; i++)
		cout << A[i] << " ";

	return 0;
}