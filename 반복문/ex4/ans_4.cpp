#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int receipt, kind;
	int sum = 0;

	cin >> receipt >> kind;

	for (int i = 0; i < kind; i++)
	{
		int price, num;
		cin >> price >> num;
		sum += price * num;
	}

	if (receipt == sum)
		cout << "Yes";
	else
		cout << "No";


	return 0;
}