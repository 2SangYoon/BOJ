#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false); // C�� stdio�� C++�� iostream�� ����ȭ ��Ȱ��ȭ, C++ ���� ���� ���
	cin.tie(NULL);
	cout.tie(NULL); // cin�� cout�� ���� ���� Ǭ��. (���� ����� �۾� ���� ����)

	long double A, B;

	cin >> A >> B;
	cout.precision(15);
	cout << fixed;
	long double result = A / B;
	cout << result;

	return 0;


}