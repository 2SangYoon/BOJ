#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false); // C�� stdio�� C++�� iostream�� ����ȭ ��Ȱ��ȭ, C++ ���� ���� ���
	cin.tie(NULL);
	cout.tie(NULL); // cin�� cout�� ���� ���� Ǭ��. (���� ����� �۾� ���� ����)

	int A, B, C;
	cin >> A >> B >> C;

	cout << (A + B) % C << '\n' << ((A % C) + (B % C)) % C << '\n' << (A * B) % C << '\n' << ((A % C) * (B % C)) % C;

}