#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false); // C�� stdio�� C++�� iostream�� ����ȭ ��Ȱ��ȭ, C++ ���� ���� ���
	cin.tie(NULL);
	cout.tie(NULL); // cin�� cout�� ���� ���� Ǭ��. (���� ����� �۾� ���� ����)

	int year;
	cin >> year;

	cout << year-543;

	return 0;


}