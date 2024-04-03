#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N,0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(),A.end());//벡터 정렬
    
    int cnt = 0;//좋은 수 개수

    for (int i = 0; i < N; i++)
    {
        int good = A[i];//목표 수
        int start = 0;//start index
        int end = N - 1;//end index

        while (start<end)
        {
            int sum = A[start] + A[end];

            if (start == i)
            {
                start++;
            }
            else if (end == i)
            {
                end--;
            }
            else if (sum == good)//합이 목표와 같으면 좋은 수 추가
            {
                cnt++;
                break;
            }
            else if (sum > good)//합이 목표보다 크면 end index 1 감소
            {
                end--;
            }
            else//합이 목표보다 작으면 start index 1 증가
            {
                start++;
            }
        }
    }
    cout << cnt;
}