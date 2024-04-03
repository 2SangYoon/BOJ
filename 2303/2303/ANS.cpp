#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;

	vector<vector<int>> A(N, vector<int>(5));//벡터 선언
	vector<vector<int>> M(N, vector<int>(1));

	for (int i = 0; i < N; i++)//벡터에 요소 집어넣기
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < N; i++)//일의 자리수 최대값 초기화
	{
		M[i][0] = (A[i][0] + A[i][1] + A[i][2]) % 10;
	}


	for (int i = 0; i < N; i++) //일의 자리수 최대값 저장
	{
		for (int j = 0; j <= 2; j++)
		{
			for (int k = j + 1; k <= 3; k++)
			{
				for (int l = k + 1; l <= 4; l++)
				{
					M[i][0] = max(M[i][0], (A[i][j] + A[i][k] + A[i][l]) % 10);


				}

			}
		}
	}

	int max_score = M[0][0];//일의 자리 최대값 초기화
	
	for (int i = 1; i < N; i++)//일의 자리 최대값 탐색
	{
		max_score = max(max_score, M[i][0]);
	}

	for (int i = N-1; i >= 0; i--)//일의 자리 최대값 인덱스 출력
	{
		
		if (M[i][0]==max_score)
		{
			cout << (i + 1);
			return 0;
		}
	}

	return 0;
}