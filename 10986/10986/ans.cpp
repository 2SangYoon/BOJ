#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int N, M;

	cin >> N >> M;

	vector <int long> A(N+1,0);
	for (int i = 1; i <= N; i++)
	{	
		cin >> A[i];
		A[i] = A[i - 1] + A[i];
	}

	vector <int long> B(M, 0);


	for (int i = 0; i < N + 1; i++)
	{
		int k;
		k = A[i] % M;
		B[k]++;
	}


	int long result = 0;

	for (int i = 0; i < M; i++)
	{
		result += (B[i]) * (B[i] - 1) / 2;
	}

	cout << result << "\n";

	return 0;
}