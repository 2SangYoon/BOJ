#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false); // C�� stdio�� C++�� iostream�� ����ȭ ��Ȱ��ȭ, C++ ���� ���� ���
	cin.tie(NULL);
	cout.tie(NULL); // cin�� cout�� ���� ���� Ǭ��. (���� ����� �۾� ���� ����)
	
	int A, B;
	cin >> A >> B;
	
	cout << A * (B % 10)<<'\n';
	cout << A * ((B % 100)/10) << '\n';
	cout << A * (B / 100)<<'\n';
	cout << A * B;

}