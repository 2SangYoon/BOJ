//#include <algorithm>			정렬 최대값
//#include <iostream>
//#include <vector>
//using namespace std;
//int main(void)
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	vector <int> A(N);
//
//	for (int i = 0; i < N; i++)
//		cin >> A[i];
//
//	sort(A.begin(), A.end());
//
//	cout << A[0] <<" "<< A[N - 1];
//
//
//	return 0;
//}
#include <algorithm>		//그냥 최대값
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector <int> A(N);

	for (int i = 0; i < N; i++)
		cin >> A[i];

	int max = A[0];
	int min = A[0];

	for (int i = 0; i < N; i++)
	{
		if (A[i] < min)
			min = A[i];
		if (A[i] > max)
			max = A[i];
	}
	cout << min << " " << max;


	return 0;
}