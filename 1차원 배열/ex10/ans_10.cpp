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
	vector <double> A(N);

	double avg = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	for (int i = 0; i < N; i++)
	{
		A[i] = (A[i] * 100) / A[N - 1];
		avg += A[i];
	}
	avg /= double(N);
	cout << avg;


	return 0;
}