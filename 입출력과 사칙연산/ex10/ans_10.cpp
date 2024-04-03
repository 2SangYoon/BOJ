#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false); // C의 stdio와 C++의 iostream의 동기화 비활성화, C++ 독립 버퍼 사용
	cin.tie(NULL);
	cout.tie(NULL); // cin과 cout가 묶인 것을 푼다. (버퍼 지우는 작업 등을 생략)
	
	int A, B;
	cin >> A >> B;
	
	cout << A * (B % 10)<<'\n';
	cout << A * ((B % 100)/10) << '\n';
	cout << A * (B / 100)<<'\n';
	cout << A * B;

}