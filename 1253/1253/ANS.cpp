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

    sort(A.begin(),A.end());//���� ����
    
    int cnt = 0;//���� �� ����

    for (int i = 0; i < N; i++)
    {
        int good = A[i];//��ǥ ��
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
            else if (sum == good)//���� ��ǥ�� ������ ���� �� �߰�
            {
                cnt++;
                break;
            }
            else if (sum > good)//���� ��ǥ���� ũ�� end index 1 ����
            {
                end--;
            }
            else//���� ��ǥ���� ������ start index 1 ����
            {
                start++;
            }
        }
    }
    cout << cnt;
}