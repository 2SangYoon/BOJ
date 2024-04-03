#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector <int> A(30, 0);

	for (int i = 0; i < 28; i++)
	{
		int a;
		cin >> a;
		A[a - 1] = 1;
	}

	for (int i = 0; i < 30; i++)
	{
		if (A[i] == 0)
			cout << i + 1 << endl;
	}



	return 0;
}