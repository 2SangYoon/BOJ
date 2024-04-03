#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	/*
	int N, cnt, front, rear;

	cin >> N >> cnt;

	vector <int> A(N+1);

	A[0] = 0;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		A[i] = A[i - 1] + A[i];
	}

	for (int i = 0; i < cnt; i++)
	{
		cin >> front >> rear;
		cout << A[rear] - A[front-1]  << '\n';
	}
	*/

	int N, M;
	cin >> N >> M;

	vector <int> A(N+1);

	A[0] = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		A[i] = A[i - 1] + A[i];
	}

	for (int i = 0; i < M; i++)
	{
		int front, rear;
		cin >> front >> rear;
		cout << A[rear] - A[front - 1] << "\n";
	}



	return 0;
}