#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false); // C�� stdio�� C++�� iostream�� ����ȭ ��Ȱ��ȭ, C++ ���� ���� ���
	cin.tie(NULL);
	cout.tie(NULL); // cin�� cout�� ���� ���� Ǭ��. (���� ����� �۾� ���� ����)

	cout << "\\    /\\" << '\n';
	cout << " )  ( ')" << '\n';
	cout << "(  /  )" << '\n';
	cout << " \\(__)|";

	return 0;
}