#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false); // C�� stdio�� C++�� iostream�� ����ȭ ��Ȱ��ȭ, C++ ���� ���� ���
	cin.tie(NULL);
	cout.tie(NULL); // cin�� cout�� ���� ���� Ǭ��. (���� ����� �۾� ���� ����)

	double A, B, C, sum;
	cin >> A >> B >> C;
	sum = A + B + C;
	cout << sum << '\n';

	return 0;

}