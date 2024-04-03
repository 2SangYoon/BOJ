#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, X;
	cin >> N >> X;

	vector <int> A(N);

	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
	{
		if (A[i] < X)
			cout << A[i] << " ";
	}



	return 0;
}