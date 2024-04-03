#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);



	vector <int> A(9);

	for (int i = 0; i < 9; i++)
	{
		cin >> A[i];
	}

	int index = 1;
	int max = A[0];

	for (int i = 0; i < 9; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			index = i + 1;
		}
	}

	cout << max << "\n" << index;




	return 0;
}