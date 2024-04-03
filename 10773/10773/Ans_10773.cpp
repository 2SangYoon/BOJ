#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k;
	cin >> k;

	vector<int> A;

	for (int i = 0; i < k; i++)
	{
		int input;

		cin >> input;

		if (input == 0)
		{
			A.pop_back();
		}
		else
		{
			A.push_back(input);
		}
	}

	int sum = 0;

	for (int i = 0; i < A.size(); i++)
	{
		sum += A[i];
	}

	cout << sum << "\n";

	return 0;
}